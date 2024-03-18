#include <iostream>
#include <fstream>
using namespace std;
int MAPA1[5][5]=
        {
            0, 1, 1, 0, 0,
            1, 1, 1, 1, 0,
            0, 1, 1, 1, 1,
            0, 1, 1, 1, 0,
            0, 0,0,0,0
        };
int MAPA2[5][5]=
        {
            0, 1, 0, 0, 0,
            1, 1, 1, 1, 0,
            1, 1, 1, 1, 1,
            0, 0, 1, 1, 0
        };
int MAPA3[5][5]=
        {
            1, 1, 1, 1, 0,
            1, 1, 1, 1, 1,
            0, 0, 1, 1, 1,
            0, 0, 1, 1, 0,
            0,0,0,0,0
        };
class Mapa{
private:
    int mp[5][5];
    int nr_mp;
public:
    Mapa()=default;
    Mapa(int mapa[5][5], int numar): nr_mp(numar)
    {
        int i, j;
        if(nr_mp==1)
            for (i = 0; i <  5; i++)
                for (j = 0; j < 5; j++)
                    mp[i][j]=MAPA1[i][j];
        if(nr_mp==2)
            for (i = 0; i <  5; i++)
                for (j = 0; j < 5; j++)
                    mp[i][j]=MAPA2[i][j];
        if(nr_mp==3)
            for (i = 0; i <  5; i++)
                for (j = 0; j < 5; j++)
                    mp[i][j]=MAPA3[i][j];
    }
    Mapa &operator=(const Mapa &mapa) {
        for(int i=0;i<5; i++)
            for(int j=0;j<5;j++)
                this->mp[i][j]=mapa.mp[i][j];
        this->nr_mp=mapa.nr_mp;
        return *this;
    }

//    void set_mapa(int nr_mp)
//    {
//        int i, j;
//        if(nr_mp==1)
//            for (i = 0; i <  5; i++)
//                for (j = 0; j < 5; j++)
//                    mp[i][j]=MAPA1[i][j];
//        if(nr_mp==2)
//            for (i = 0; i <  5; i++)
//                for (j = 0; j < 5; j++)
//                    mp[i][j]=MAPA2[i][j];
//        if(nr_mp==3)
//            for (i = 0; i <  5; i++)
//                for (j = 0; j < 5; j++)
//                    mp[i][j]=MAPA3[i][j];
//    }
    int get_mapa()
    {
          return mp[5][5];
//        int t, z;
//        for (t = 0; t < 5; t++) {
//            for (z = 0; z < 5; z++)
//                cout << mp[t][z]<<" ";
//            cout<<endl;
//        }
    }
    int get_elem(int i, int j)
    {
        return mp[i][j];
    }
    void set_elem(int k, int g, int d)
    {
        mp[k][g]=d;
    }
    int get_mapa_nr()
    {
        return nr_mp;
    }
    friend std::ostream &operator<<(std::ostream &os, const Mapa &mapa) {
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
                os << mapa.mp[i][j];
            os << endl;
        }
        return os;
    }
};
