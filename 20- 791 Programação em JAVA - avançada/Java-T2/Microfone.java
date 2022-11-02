public  class Microfone implements Funcoes{

  // ATRIBUTOS
  
  private int volume;
  private boolean ligar;
  private boolean aTocar;
  
  
  //METODO ESPECIAIS
  
  public Microfone() {
      this.volume = 100;
      this.ligar = false;
      this.aTocar = false; 
  }
  private int getvolume(){
    return volume;
  }  
  private void setvolume (int volume){
   this.volume = volume;
  }  
  
  private boolean getligar(){
     return ligar;
  }  
  private void setligar (boolean ligar){
    this.ligar = ligar;
  }  
        
  private boolean getaTocar(){
    return aTocar;
  }  
  private void setaTocar (boolean aTocar){
    this.aTocar = aTocar;
  
  }
  // METODOS ABSTRATOS
  
  public  void ComSom() {
    if (this.getligar() && this.getvolume() == 0) {
      this.setvolume(30);
    }
  }
  
  public void Desligar() {
      if(getaTocar()){
          this.setaTocar(false);
      }
    this.setligar(false);
  }
  
  public  void Ligar() {
    this.setligar(true);
    this.setaTocar(true);
  }
  
  public  void AumentarVolume() {
    if (this.getligar()){ 
      this.setvolume(this.getvolume()+3);
    }
  }
  
  public  void DiminuirVolume() {
    if (this.getligar()){ 
      this.setvolume(this.getvolume()-3);
    }
  }
  
  public  void SemSom() {
    if (this.getligar() && this.getvolume() > 0){
      this.setvolume(0);
    }
  }
  
}





