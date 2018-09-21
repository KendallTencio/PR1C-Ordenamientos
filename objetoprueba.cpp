class ObjPrueba
{
  private:
    int placa;
    int x;
  public:
    ObjPrueba(){
      placa = 0;
    }
    ObjPrueba(int x){
      placa = x;
    }
    void asignarPlaca(int pPlaca){
      placa = pPlaca;
    }
    int getPlaca(){
      return placa;
    }
    //~ObjPrueba();
};
