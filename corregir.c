# Corregir los cinco errores.
#include<iostream>

using namespace std ;

int main(){

 int n,aux
 cout<<"Ingrese la cantidad de numeros :";
 cin>>n;
 int V[n];
 for(int i=0;i<n;i++){
  cout<<"\n Numero "<<i+1<<" = ";
  cin>>V[i]
 }

 for(int i=0;i<n;i+){
  for(int j=i+1;j<n;j++){
   if(V[j]<V[i]){
    aux=V[];
    V[i]=V[];
    V[j]=aux;
    
   }
  }
 }

 cout<<"Elementos Ordenados:"<<endl;
 for(int i=0;i<n;i++){
  cout<<V[i]<<endl;
 }

 return 0;
}
