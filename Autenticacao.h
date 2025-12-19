#ifndef AUTENTICACAO_H
#define AUTENTICACAO_H

#include <iostream>
using namespace std;

class Autenticacao{
    public:
    
    virtual void virtualAutentic() override{
        
    }
};


class LoginSenha :: public Autenticacao{
  private:  
    
  string login;
  string senha;
  
  
  public:
  
  void criarSenha();
  void criarLogin();
};

class GoogleAuth{
  private:
  
  
  public:
  
};

class QrCode{
  private:
  
  
  public:
};















#endif