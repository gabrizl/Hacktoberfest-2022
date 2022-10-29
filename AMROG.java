// A Java program for getting minimum product
// spanning tree The program is for adjacency matrix
// representation of the graph

import java.util.*;
 
class AMROG {
 
    // Number of vertices in the graph
    static int V = 5;
 
    // A utility function to find the vertex with minimum
    // key value, from the set of vertices not yet included
    // in MST
    static int minKey(int key[], boolean[] mstSet)
    {
        // Initialize min value
        int min = Integer.MAX_VALUE, min_index = 0;
 
        for (int v = 0; v < V; v++) {
            if (mstSet[v] == false && key[v] < min) {
                min = key[v];
                min_index = v;
            }
        }
        return min_index;
    }
 
    // A utility function to print the constructed MST
    // stored in parent[] and print Minimum Obtainable
    // product
    static void printMST(int parent[], int n, int graph[][])
    {
        System.out.printf("Edge Weight\n");
        int minProduct = 1;
        for (int i = 1; i < V; i++) {
            System.out.printf("%d - %d %d \n",
                              parent[i], i, graph[i][parent[i]]);
 
            minProduct *= graph[i][parent[i]];
        }
        System.out.printf("Minimum Obtainable product is %d\n",
                          minProduct);
    }
 
    // Function to construct and print MST for a graph
    // represented using adjacency matrix representation
    // inputGraph is sent for printing actual edges and
    // logGraph is sent for actual MST operations
    static void primMST(int inputGraph[][], double logGraph[][])
    {
        int[] parent = new int[V]; // Array to store constructed MST
        int[] key = new int[V]; // Key values used to pick minimum
        // weight edge in cut
        boolean[] mstSet = new boolean[V]; // To represent set of vertices not
        // yet included in MST
 
        // Initialize all keys as INFINITE
        for (int i = 0; i < V; i++) {
            key[i] = Integer.MAX_VALUE;
            mstSet[i] = false;
        }
        // Always include first 1st vertex in MST.
        key[0] = 0; // Make key 0 so that this vertex is
        // picked as first vertex
        parent[0] = -1; // First node is always root of MST
 
        // The MST will have V vertices
        for (int count = 0; count < V - 1; count++) {
            // Pick the minimum key vertex from the set of
            // vertices not yet included in MST
            int u = minKey(key, mstSet);
 
            // Add the picked vertex to the MST Set
            mstSet[u] = true;
 
            // Update key value and parent index of the
            // adjacent vertices of the picked vertex.
            // Consider only those vertices which are not yet
            // included in MST
            for (int v = 0; v < V; v++) // logGraph[u][v] is non zero only for
            // adjacent vertices of m mstSet[v] is false
            // for vertices not yet included in MST
            // Update the key only if logGraph[u][v] is
            // smaller than key[v]
            {
                if (logGraph[u][v] > 0
                    && mstSet[v] == false
                    && logGraph[u][v] < key[v]) {
 
                    parent[v] = u;
                    key[v] = (int)logGraph[u][v];
                }
            }
        }
 
        // print the constructed MST
        printMST(parent, V, inputGraph);
    }
 
    // Method to get minimum product spanning tree
    static void minimumProductMST(int graph[][])
    {
        double[][] logGraph = new double[V][V];
 
        // Constructing logGraph from original graph
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (graph[i][j] > 0) {
                    logGraph[i][j] = Math.log(graph[i][j]);
                }
                else {
                    logGraph[i][j] = 0;
                }
            }
        }
 
        // Applying standard Prim's MST algorithm on
        // Log graph.
        primMST(graph, logGraph);
    }
 
    // Driver code
    public static void main(String[] args)
    {
        /* Let us create the following graph
        2 3
    (0)--(1)--(2)
        | / \ |
    6| 8/ \5 |7
        | /     \ |
    (3)-------(4)
            9         */
        int graph[][] = {
            { 0, 2, 0, 6, 0 },
            { 2, 0, 3, 8, 5 },
            { 0, 3, 0, 0, 7 },
            { 6, 8, 0, 0, 9 },
            { 0, 5, 7, 9, 0 },
        };
 
        // Print the solution
        minimumProductMST(graph);
    }
}
