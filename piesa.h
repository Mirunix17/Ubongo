#include <iostream>
#include <fstream>

using namespace std;

int PIESA1[4][4]=
        {0,1, 1, 0,
         1, 1, 0, 0,
         0, 0, 0, 0,
         0,0, 0, 0
        };
int PIESA2[4][4]=
        {0, 1, 0, 0,
         1, 1, 0, 0,
         1, 1, 0, 0,
         0, 0, 0, 0
        };
int PIESA3[4][4]=
        {
                0, 1, 1, 0,
                1, 1, 0, 0,
                0, 0, 0, 0,
                0, 0, 0, 0
        };
int PIESA4[4][4]=
        {
                0, 1, 0, 0,
                1, 1, 1, 1,
                0, 0, 0, 0,
                0, 0, 0, 0
        };
int PIESA5[4][4]=
        {
                1, 1, 1, 0,
                0, 0, 1, 0,
                0, 0, 0, 0,
                0, 0, 0, 0
        };
int PIESA6[4][4]=
        {
                1, 1, 0, 0,
                1, 0, 0, 0,
                0, 0, 0, 0,
                0, 0, 0, 0
        };
int PIESA7[4][4]=
        {
                1, 1, 1, 1,
                1, 0, 0, 0,
                0, 0, 0, 0,
                0, 0, 0, 0
        };
int PIESA8[4][4]=
        {
                1, 1, 0, 0,
                0, 1, 0, 0,
                0, 1, 1, 0,
                0, 0, 0, 0
        };
int PIESA9[4][4]=
        {
                1, 1, 0, 0,
                1, 1, 0, 0,
                0, 0, 0, 0,
                0, 0, 0, 0

        };

class Piesa {
private:
    int pi[4][4];
    int nr;
    int dir;
public:
    Piesa()=default;
    Piesa(int piesa[4][4], int nr, int dir): nr(nr), dir(dir)
    {
        int i, j;
        if(nr==1)
            for (i = 0; i < 4; i++)
                for (j = 0; j <4; j++)
                    pi[i][j]=PIESA1[i][j];
        if(nr==2)
            for (i = 0; i < 4; i++)
                for (j = 0; j <4; j++)
                    pi[i][j]=PIESA2[i][j];
        if(nr==3)
            for (i = 0; i < 4; i++)
                for (j = 0; j <4; j++)
                    pi[i][j]=PIESA3[i][j];
        if(nr==4)
            for (i = 0; i < 4; i++)
                for (j = 0; j <4; j++)
                    pi[i][j]=PIESA4[i][j];
        if(nr==5)
            for (i = 0; i < 4; i++)
                for (j = 0; j <4; j++)
                    pi[i][j]=PIESA5[i][j];
        if(nr==6)
            for (i = 0; i < 4; i++)
                for (j = 0; j <4; j++)
                    pi[i][j]=PIESA6[i][j];
        if(nr==7)
            for (i = 0; i < 4; i++)
                for (j = 0; j <4; j++)
                    pi[i][j]=PIESA7[i][j];
        if(nr==8)
            for (i = 0; i < 4; i++)
                for (j = 0; j <4; j++)
                    pi[i][j]=PIESA8[i][j];
        if(nr==9)
            for (i = 0; i < 4; i++)
                for (j = 0; j <4; j++)
                    pi[i][j]=PIESA9[i][j];
        rotire(dir);
//        if(dir==1)
//            int ok=1;
//        if(dir==2)
//        {
//            for(i = 0; i<4; i++)
//                for(j=0; j<2; j++)
//                    swap(pi[i][j],pi[i][3-j]);
//        }
//        if(dir==3 || dir==4 || dir==5 || dir==6 || dir==7 || dir==8)
//        {
//            for (int i = 0; i < 4 / 2; i++) {
//                for (int j = i; j < 4 - i - 1; j++)
//                {
//                    int temp = pi[i][j];
//                    pi[i][j] = pi[4 - 1 - j][i];
//                    pi[4 - 1 - j][i] = pi[4 - 1 - i][4 - 1 - j];
//                    pi[4 - 1 - i][4 - 1 - j] = pi[j][4 - 1 - i];
//                    pi[j][4 - 1 - i] = temp;
//                }
//            }
//            if(dir==4)
//            {
//                for(i = 0; i<4; i++)
//                    for(j=0; j<2; j++)
//                        swap(pi[i][j],pi[i][3-j]);
//            }
//            if(dir==5 || dir==6 || dir==7 || dir==8)
//            {
//                for (int i = 0; i < 4 / 2; i++) {
//                    for (int j = i; j < 4 - i - 1; j++)
//                    {
//                        int temp = pi[i][j];
//                        pi[i][j] = pi[4 - 1 - j][i];
//                        pi[4 - 1 - j][i] = pi[4 - 1 - i][4 - 1 - j];
//                        pi[4 - 1 - i][4 - 1 - j] = pi[j][4 - 1 - i];
//                        pi[j][4 - 1 - i] = temp;
//                    }
//                }
//                if(dir==6)
//                {
//                    for(i = 0; i<4; i++)
//                        for(j=0; j<2; j++)
//                            swap(pi[i][j],pi[i][3-j]);
//                }
//                if(dir==7 || dir==8)
//                {
//                    for (int i = 0; i < 4 / 2; i++) {
//                        for (int j = i; j < 4 - i - 1; j++)
//                        {
//                            int temp = pi[i][j];
//                            pi[i][j] = pi[4 - 1 - j][i];
//                            pi[4 - 1 - j][i] = pi[4 - 1 - i][4 - 1 - j];
//                            pi[4 - 1 - i][4 - 1 - j] = pi[j][4 - 1 - i];
//                            pi[j][4 - 1 - i] = temp;
//                        }
//                    }
//                    if(dir==8)
//                    {
//                        for(i = 0; i<4; i++)
//                            for(j=0; j<2; j++)
//                                swap(pi[i][j],pi[i][3-j]);
//                    }
//                }
//            }
//        }

        //memcpy(pi, piesa, sizeof(pi));
    };
    void rotire(int dir)
            {
                int i, j;
                if(dir==1)
                    int ok=1;
                if(dir==2)
                {
                    for(i = 0; i<4; i++)
                        for(j=0; j<2; j++)
                            swap(this->pi[i][j],this->pi[i][3-j]);
                }
                if(dir==3 || dir==4 || dir==5 || dir==6 || dir==7 || dir==8)
                {
                    for (int i = 0; i < 4 / 2; i++) {
                        for (int j = i; j < 4 - i - 1; j++)
                        {
                            int temp = this->pi[i][j];
                            this->pi[i][j] = this->pi[4 - 1 - j][i];
                            this->pi[4 - 1 - j][i] = this->pi[4 - 1 - i][4 - 1 - j];
                            this->pi[4 - 1 - i][4 - 1 - j] = this->pi[j][4 - 1 - i];
                            this->pi[j][4 - 1 - i] = temp;
                        }
                    }
                    if(dir==4)
                    {
                        for(i = 0; i<4; i++)
                            for(j=0; j<2; j++)
                                swap(this->pi[i][j],this->pi[i][3-j]);
                    }
                    if(dir==5 || dir==6 || dir==7 || dir==8)
                    {
                        for (int i = 0; i < 4 / 2; i++) {
                            for (int j = i; j < 4 - i - 1; j++)
                            {
                                int temp = this->pi[i][j];
                                this->pi[i][j] = this->pi[4 - 1 - j][i];
                                this->pi[4 - 1 - j][i] = this->pi[4 - 1 - i][4 - 1 - j];
                                this->pi[4 - 1 - i][4 - 1 - j] = this->pi[j][4 - 1 - i];
                                this->pi[j][4 - 1 - i] = temp;
                            }
                        }
                        if(dir==6)
                        {
                            for(i = 0; i<4; i++)
                                for(j=0; j<2; j++)
                                    swap(this->pi[i][j],this->pi[i][3-j]);
                        }
                        if(dir==7 || dir==8)
                        {
                            for (int i = 0; i < 4 / 2; i++) {
                                for (int j = i; j < 4 - i - 1; j++)
                                {
                                    int temp = this->pi[i][j];
                                    this->pi[i][j] = this->pi[4 - 1 - j][i];
                                    this->pi[4 - 1 - j][i] = this->pi[4 - 1 - i][4 - 1 - j];
                                    this->pi[4 - 1 - i][4 - 1 - j] = this->pi[j][4 - 1 - i];
                                    this->pi[j][4 - 1 - i] = temp;
                                }
                            }
                            if(dir==8)
                            {
                                for(i = 0; i<4; i++)
                                    for(j=0; j<2; j++)
                                        swap(this->pi[i][j],this->pi[i][3-j]);
                            }
                        }
                    }
                }
            };

    Piesa(const Piesa &piesa) {
        for(int i=0;i<4; i++)
            for(int j=0;j<4;j++)
                this->pi[i][j]=piesa.pi[i][j];
        this->nr=piesa.nr;
        this->dir=piesa.dir;
    }
    Piesa &operator=(const Piesa &piesa) {
        for(int i=0;i<4; i++)
            for(int j=0;j<4;j++)
                this->pi[i][j]=piesa.pi[i][j];
        this->nr=piesa.nr;
        this->dir=piesa.dir;
        return *this;
    }
//    void set_piesa(int nr) {
//        int i, j;
//        int b[4][4];
//        if(nr==1)
//            for (i = 0; i < 4; i++)
//                for (j = 0; j <4; j++)
//                    pi[i][j]=PIESA1[i][j];
//        if(nr==2)
//            for (i = 0; i < 4; i++)
//                for (j = 0; j <4; j++)
//                    pi[i][j]=PIESA2[i][j];
//        if(nr==3)
//            for (i = 0; i < 4; i++)
//                for (j = 0; j <4; j++)
//                    pi[i][j]=PIESA3[i][j];
//        if(nr==4)
//            for (i = 0; i < 4; i++)
//                for (j = 0; j <4; j++)
//                    pi[i][j]=PIESA4[i][j];
//        if(nr==5)
//            for (i = 0; i < 4; i++)
//                for (j = 0; j <4; j++)
//                    pi[i][j]=PIESA5[i][j];
//        if(nr==6)
//            for (i = 0; i < 4; i++)
//                for (j = 0; j <4; j++)
//                    pi[i][j]=PIESA6[i][j];
//        if(nr==7)
//            for (i = 0; i < 4; i++)
//                for (j = 0; j <4; j++)
//                    pi[i][j]=PIESA7[i][j];
//        if(nr==8)
//            for (i = 0; i < 4; i++)
//                for (j = 0; j <4; j++)
//                    pi[i][j]=PIESA8[i][j];
//        if(nr==9)
//            for (i = 0; i < 4; i++)
//                for (j = 0; j <4; j++)
//                    pi[i][j]=PIESA9[i][j];
//        if(dir==1)
//            int ok=1;
//        if(dir==2)
//        {
//            for(i = 0; i<4; i++)
//                for(j=0; j<2; j++)
//                    swap(pi[i][j],pi[i][3-j]);
//        }
//        if(dir==3)
//        {
//            for(i = 0; i<4; i++)
//                for(j=0; j<4; j++)
//                    b[i][j]=pi[3-j+1][i];
//            for(i = 0; i<4; i++)
//                for(j=0; j<4; j++)
//                    pi[i][j]=b[i][j];
//
//        }
//
//
//    }
//    void set_dir()
//    {
//        int x;
//        cin>>x;
//        dir=x;
//    }
    int get_piesa()
    {
          return pi[4][4];
//        int i, j;
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++)
//                cout <<  pi[i][j];
//            cout<<endl;
//        }

    }
    int get_piesa_nr()
    {
        return nr;
    }
//    void referinta(int nr)
//    {
//        if(nr==1)
//        {
//            pi[0][1]=2;
//        }
//        if(nr==2)
//        {
//            pi[0][1]=2;
//        }
//        if(nr==3)
//        {
//            pi[0][1]=2;
//        }
//
//    }
    friend std::ostream &operator<<(std::ostream &os, const Piesa &piesa) {
        int i, j;
        for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                    os << piesa.pi[i][j];
                os << endl;
            }
        return os;
    }

    virtual ~Piesa() {};
//    void afisare()
//    {
        //        int i, j;
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++)
//                cout <<  pi[i][j];
//            cout<<endl;
//        }
//    }
};