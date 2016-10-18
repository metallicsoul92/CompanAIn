#ifndef CTUPLE_H
#define CTUPLE_H

namespace clim{

template <typename T,typename U>
    class Tuple{
    private:
        T m_t;
        U m_u;


    public:
        Tuple(T t,U u): m_t(t),m_u(u){;}
        Tuple(){}

        inline void setT(T t){ m_t = t;}
        inline void setU(U u){ m_u = u;}

        inline T getT(){return m_t;}
        inline T cT()const{return m_t;}

        inline U getU(){return m_u;}
        inline U cU()const{return m_u;}
    };



}


#endif // CTUPLE_H
