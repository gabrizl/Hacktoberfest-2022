public class OnlineRegister{
    private String nomeDisc;
    private int tempoE;
    private int totalTempoOn;
    
    public OnlineRegister(String nomeDisciplina){
        nomeDisc = nomeDisciplina;
        tempoE = 60;
    }

    
    public OnlineRegister(String nomeDisciplina, int tempoOnlineEsperado){
        nomeDisc = nomeDisciplina;
        tempoE = tempoOnlineEsperado;        
    }

   
    public void adicionaTempoOnline(int tempo){
        totalTempoOn += tempo;
    }
        
    
    public boolean atingiuMetaTempoOnline(){
        if(totalTempoOn >= tempoE){
            return true;
        }else{
            return false;
        }   
    }

    
    public String toString(){
        return nomeDisc + " " + Integer.toString(totalTempoOn) + "/" + Integer.toString(tempoE);
    }
}
