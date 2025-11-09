#include<iostream>
#include<cmath>
#include "vector.h"
#include "point.h"

Vector2f MakeV2f(float x, float y);
Vector2f MakeV2f(const Point2f& a, const Point2f& b);
Vector2f Add(const Vector2f& a, const Vector2f& b);
Vector2f Sub(const Vector2f& a, const Vector2f& b);
Vector2f Scale(const Vector2f& v, float scalar);
float Dot(const Vector2f& a, const Vector2f& b);
float Length(const Vector2f& v);
Vector2f Normalize(const Vector2f& v);
Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t);
float Determinant(const Vector2f& a, const Vector2f& b);

int main(){
    return 0;
}

Vector2f MakeV2f(const Point2f& a, const Point2f& b){
    Vector2f l;
    l.x= b.x-a.x;
    l.y=b.y-a.y;
    return l;
}
Vector2f Add(const Vector2f& a, const Vector2f& b){
    
Vector2f j;
j.x=a.x+b.x;
j.y=a.y+b.y;
return j;
}
Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t){
    Vector2f o;
    o.x=(a.x+(b.x-a.x)*t); 
    o.y= (a.y+(b.y-a.y)*t);
    return o;
}
float Determinant(const Vector2f& a, const Vector2f& b){
    float m,n,d;
    m =(a.x*b.y);
    n =( a.x*b.x);
    d= m-n;
    return d;
}
float length (const Vector2f& v){
    //length consiste a calculer la longueur d'un vecteur donne
    
    float a;
    float d;
    a = v.x*v.x + v.y*v.y;// cette ligne permet de calculer la somme des carres de chaque composante 
    d=sqrt(a);//cette instruction effectue la racine carre cette somme 
    return d;
}
Vector2f Sub(const Vector2f& a, const Vector2f& b){
    Vector2f p;
    p.x=a.x-b.x; // on fait la difference entre chaques composantes du vecteur pour obtenir les coordonnees du vecteur de leur difference
    p.y=a.y-b.y;

  return p;
}
Vector2f Normalize(const Vector2f& v){
//normaliser un vecteur c'est diviser les composantes du vecteur par la norme de celui ci

    Vector2f k;
    float x =length(v);//ici nous calculons la norme du vecteur v 
  if(x!=0){  // cette boucle permet de s'assurer que le denominateur est non nul
    k.x= v.x/x;
    k.y= v.y/x;
    }else {
    std::cout<<"impossible d'effectuer cette operation \n";
    }
 return k ;
}
float Dot(const Vector2f& a, const Vector2f& b){
    // dot signifie le produit scalaire de deux vecteurs
    float n;
    n=(a.x*b.x+a.y+b.y);
    return n;
}

Vector2f Scale(const Vector2f& v, float scalar){
    Vector2f l;
    l.x=scalar *v.x;// on multiplie chaques composantes du vecteur par un reel appele scalaire
     l.x=scalar *v.y;
     return l;
}












