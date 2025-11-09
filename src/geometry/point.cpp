#include<iostream>
#include<string>
#include<sstream>
#include "vector.h"
#include "point.h"


int main (){
    return 0;

}   

Point2f MakeP2f(float x, float y){
    Point2f p;
       std::cout<<"entrer l'abscisse de votre point:\n";
       std::cin>>p.x; 
       std::cout<<"entrer l'abscisse de votre point:\n";
       std::cin>>p.y; 

    return p;
}

Point2f Translate(const Point2f& p, float dx, float dy){

    Point2f j;
    float d,n;
    d=dx-p.x;// permet de calculer la distance qui separe les deux abscisses

    n=dy-p.y;// fait de meme avec les ordonnes

 j.x +=d;// on ajoute a la valeur initiale la distance des abscisses

 j.y +=n; // on fais pareil avec les ordonnes
   
   return j;
}
Point2f Rotate(const Point2f& p, float angleDegree){
    //rotate effectue la rotation d'un point d'un angle nomme angleDegree
    Point2f L;
    L.x= p.x*cos(angleDegree)-p.y*sin(angleDegree);//on obtiendra l'abscisse du nouveau point par la rotation
    L.y=p.x*sin(angleDegree)-p.y*cos(angleDegree);//on obtiendra de meme l'ordonne
    return L;
}
Point2f Scale(const Point2f& p, const Vector2f& s){
  Point2f o;
  o.x= p.x+s.x;
  o.x= p.y+s.y;
return o;

}

Point2f Scale(const Point2f& p, float sx, float sy){

    Point2f j;
    float d,n,i,k;
    d=(p.x-sx*p.x-sx)+(p.y-sy*p.y-sy);
    n=sqrt(d);
    std::cout<<"enter la distance dont vous souhaitez deplacer votre poin:\n";
    std::cin>>i;
    k=i/n;
    j.x*=k;
    j.y*=k;
    return j;

}
Point2f Translate(const Point2f& p, const Vector2f& v){
    // translate nous permet de quitter d'un point a un autre

    Point2f s;
    s.x=p.x+v.x;//il est question d'ajouter a l'abscisse du point d'origine la composante x du vecteur de translation 
    s.y=p.y+v.y;//on fait de meme avec l'ordonne du point
    return p;
}
std::string ToString(const Point2f& p){
    //cette fonction permet deconvertir un objet de type point en chaine de caractere
std::ostringstream oss;//permet de creer un obet nomme oss de type std::ostringstream

    oss << "("<<"p.x"<<","<<"p.Y"<<")";//cette instruction permet d'inserer les valeurs de p.x et p.y 

    return oss.str();//permet de retourner la chaine de caractere formee
}





