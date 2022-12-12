#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Country{
    public:
    string name;
    string capital;
    string code;
    int population;
    float area;
    float gdp;
    int num;

    Country(string name, string capital, string code, int population,  float area,  float gdp, int num){
        this -> name = name;
        this -> capital = capital;
        this -> code = code;
        this -> population = population;
        this -> area = area;
        this -> gdp = gdp;
        this -> num = num;
    }
   
};
 enum government{
        DEMOCRACY = 1,
        REPUBLIC,
        AUTOCRACY
    };
class Land{
    public:
    vector<Country> country;
    government type;
    void insert(){
        country.push_back(Country("USA","Wshngtn","+1",331000000, 9834000, 22996, 2));
        country.push_back(Country("China","Peking","+86",1412000000, 9597000, 12556.33, 2));
        country.push_back(Country("Spanish","Madrid","+34",47330000, 505990,30115.71, 1));;
        country.push_back(Country("Germany","Berlin","+49",83130000, 357588, 50801.79, 2));
        country.push_back(Country("France","Paris","+33",67500000, 643801, 43518.54, 2));

    }
    void print(){
        for(int i = 0; i < country.size(); i++)
        {
            cout<<country[i].name<<"\t";
            cout<<country[i].capital<<"\t";
            cout<<country[i].code<<"\t";
            cout<<country[i].population<<"\t";
            cout<<country[i].area<<"\t";
            cout<<country[i].gdp<<"\t";
            cout<< getNum(i)<<endl;
        }
    }
     float claculatePopulationDensity(){
        for (int i = 0; i < country.size(); i++)
        {
            cout<< country[i].name<<"\t"<<country[i].population/country[i].area<<endl; 
        }
        
    }
    void topOfCounry(){
        for(int i = 0; i < country.size(); i++){
            for(int x = 0; x < country.size()-1; x++){
                if(country[x].gdp<country[x+1].gdp){
                    swap(country[x],country[x+1]);
                }
            }
        }

    }
    string getNum(int a){
        if(country[a].num==1){
            return"DEMOCRACY";
        }
        if(country[a].num==2){
            return"REPUBLIC";
        }
        if(country[a].num==3){
            return"AUTOCRACY";
        }
    }
    void object()
    {
        string name;
        cin>>name;
        for( int i = 0; i<country.size(); i++){
            if(name==country[i].name){
                cout<<country[i].name<<"\t";
                cout<<country[i].capital<<"\t";
                cout<<country[i].code<<"\t";
                cout<<country[i].population<<"\t";
                cout<<country[i].area<<"\t";
                cout<<country[i].gdp<<"\t";
                cout<< getNum(i)<<endl;
            }

        }
    }
};

int main(){
    Land land;
    land.insert();
    land.claculatePopulationDensity();
    land.topOfCounry();
    land.print();
    land.object();
}
