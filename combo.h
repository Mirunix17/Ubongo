//#include <iostream>
//
//using namespace std;
//
//class Combo{
//private:
//    Piesa piesa1, piesa2, piesa3;
//    Mapa mp;
//    int nrcombo;
//public:
//    Combo(const Piesa& piesa1, const Piesa& piesa2, const Piesa& piesa3, const Mapa& mp, int nrcombo): nrcombo(nrcombo){
//        if(nrcombo==1)
//            Mapa mp(MAPA1, 1);
//        if(nrcombo==2)
//            Mapa mp(MAPA2, 2);
//        if(nrcombo==3)
//            Mapa mp(MAPA3, 3);
//        if(nrcombo==1)
//        {
//            Piesa piesa1(PIESA1, 1, 1);
//            Piesa piesa2(PIESA2, 1, 1);
//            Piesa piesa3(PIESA3, 1, 1);
//        }
//        if(mp.get_mapa_nr()==2)
//        {
//            Piesa piesa1(PIESA4, 1, 1);
//            Piesa piesa2(PIESA5, 1, 1);
//            Piesa piesa3(PIESA6, 1, 1);
//        }
//        if(mp.get_mapa_nr()==3)
//        {
//            Piesa piesa1(PIESA7, 1, 1);
//            Piesa piesa2(PIESA8, 1, 1);
//            Piesa piesa3(PIESA9, 1, 1);
//        }
//    }
////    void set_combo()
////    {
////        if(mp.get_mapa_nr()==1)
////        {
////            Piesa piesa1(PIESA1, 1, 1);
////            Piesa piesa2(PIESA2, 1, 1);
////            Piesa piesa3(PIESA3, 1, 1);
////        }
////        if(mp.get_mapa_nr()==2)
////        {
////            Piesa piesa1(PIESA4, 1, 1);
////            Piesa piesa2(PIESA5, 1, 1);
////            Piesa piesa3(PIESA6, 1, 1);
////        }
////        if(mp.get_mapa_nr()==3)
////        {
////            Piesa piesa1(PIESA7, 1, 1);
////            Piesa piesa2(PIESA8, 1, 1);
////            Piesa piesa3(PIESA9, 1, 1);
////        }
////    }
//    std::tuple<Piesa, Piesa, Piesa> get_combo()
//    {
//          return {piesa1, piesa2, piesa3};
////        piesa1.get_piesa();
////        cout<<endl;
////        piesa2.get_piesa();
////        cout<<endl;
////        piesa3.get_piesa();
//    }
//};
