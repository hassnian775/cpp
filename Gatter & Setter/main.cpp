#include <iostream>

using namespace std;
class Movie {
private:
    string rating;
    public:
    string title;
    string director;
    Movie(string aTitle,string aDirector, string aRating){
    title=aTitle;
    director=aDirector;
    setRating(aRating);
    }
    void setRating(string aRating){
   if(aRating=="23"||aRating=="30"||aRating=="40"||aRating=="50"||aRating=="50"){
    rating=aRating;
   }
   else{
   rating="Invalid";
   }
   }
   string getRating(){
   return rating;
   }
};
int main()
{
 Movie Avanger("The Avanger","joss","PG-13");
 Avanger.setRating("35");
 cout<<Avanger.getRating();
    return 0;
}
