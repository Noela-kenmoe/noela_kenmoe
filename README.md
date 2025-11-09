# noela_kenmoe} #**DESCRIPTION DU PROJET**
notre devoir consiste a creer un fichier nommé **src** qui va contenir un fichier **main.cpp** dans lequel nous aurons les declarations des fichiers en-tete comme **#include "geometry/point.h"**//qui declare le fichier en-tete ~~point.h 
**#include "geometry/vector.h"**//qui contient le fichier en-tete ~~vector.h
**#include "geometry/utils.h"**//qui contient le fichier ~~utils
Tous ces fichier sont contenus dans le dossier ##geometry qui lui aussi est contenu dans le dossier ##src
##===DESCRIPTION DES DIFFERENTS FICHIERS EN TETE#
*--point.h qui contient les declarations des prototypes fonctions utilisées pour la manipulation des points mais aussi la declaration de structures de données notamment
**struct Point2f {
    float x;
    float y;
};**// qui déclare une structure nommée &&Point2f avec pour parametres x et y de type float
les prototypes des fonctions qu'elles contiennent sont les suivantes:
**Point2f MakeP2f(float x, float y);**// permet de creer un point a partir de deux vbaraibles ou parametres locales de la fonctions x et y et qui retourne une valeur de type Point2f qui est le point crée
**Point2f Translate(const Point2f& p, float dx, float dy);**//permet de deplacer d'un endroit a un autre sans toute fois modifier sa taille elle renvoie le point qui a subit la translation
**Point2f Translate(const Point2f& p, const Vector2f& v);**// elle permet aussi de deplacer un point d'un point a un autre mais cette fois ci a l'aide d'un vecteur de translation donné
**Point2f Scale(const Point2f& p, float sx, float sy);**//permet de modifier la taille d'un objet , le redimensionner sans changer son arientation elle necessite le calcule de la distance entre les deux points 
**Point2f Scale(const Point2f& p, const Vector2f& s);**//redimensionne aussi un objet mais en fonction d'un vecteur donné
**Point2f Rotate(const Point2f& p, float angleDegree);**// permet la rotation d'un point par rapport a un angle souhaité par l'utilisateur

**std::string ToString(const Point2f& p);**// convertis un objet de type Point2f en une chaine de caractere
*--vector.h* 
ce fichier contient des declarations des prototypes de fonctions mais aussi des structures de donnees comme Vector2f
**struct Vector2f {
    float x;
    float y;
};** qui est une structure de donnée destinée à contenir les composantes d'un vecteur
les prototypes déclarés das ce fichiers sont:
**Vector2f MakeV2f(float x, float y);**// utiliser pour créer un vecteur a partir de ces deux composantes x et y 
**Vector2f MakeV2f(const Point2f& a, const Point2f& b);**// qui permet aussi de créer un vecteur mais cette fois ci a partir de deux points
**Vector2f Add(const Vector2f& a, const Vector2f& b);**// qui effectue l'addition de deux vecteurs
**Vector2f Sub(const Vector2f& a, const Vector2f& b);**// utilisée pour la soustractions de deux vecteurs
**Vector2f Scale(const Vector2f& v, float scalar);**// qui redimensionne un vecteur grace a un reel nommé scalar 
**float Dot(const Vector2f& a, const Vector2f& b);**// qui permet de calculer le produit scalaire de deux vecteurs
**float Length(const Vector2f& v);**//permet de calculer la longueur d'un vecteur entré par l'utilisateur
**Vector2f Normalize(const Vector2f& v)**;// qui permet de normalisé un vecteur c'est à dire diviser ces deux composantes par la longueur du vecteur
**Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t)**;// lerp qui signifie interpolation linéaire consiste a trouver un point intermediaire entre deux points connus
**float Determinant(const Vector2f& a, const Vector2f& b);**// permet de calculer le déterminant entre deux vecteurs pour déterminer s'ils sont orthogonaux

**std::string ToString(const Vector2f& v);**//permet de convertir un objet de type Vector2f en chaine de caractere

#endif
###DESCRIPTION DES FICHIER .cpp
ce sont les fichiers qui vont contenir les implementations des fonctip*ons contenues dans les fichiers en-tete
**point.cpp** qui contient les implementations des fonctions:
Point2f MakeP2f(float x, float y) si l'on fais point2f(a,b)on obtiendra un point de coordonne(a,b)
**Point2f Rotate(const Point2f& p, float angleDegree)**//ici on auras
x qui est un point si l'on fais x=Rotate(o,30) la   fonction va nous retourner le point x qui a subi une rotation d'un angle de 30°
*vector.cpp* : lui contient l'implementations des fonctions dont lesz prototypes sont déclares dans le fichier en-tete vector.h comme:
**Vector2f Normalize(const Vector2f& v);**//qui normalise un vecteur ici on va utilisé la fonction length qui permet de calculer la longueur d'un vecteur soit float x=length(v) qui vas calculer la longieur du vecteur v , ensuite on appel la fonction soit Vector2f n= Normalize(v) qui va returner le vecteur qui sera deja normalisé return n;
