#ifndef CTRIPLE_H
#define CTRIPLE_H

#include <QtCore>

namespace clim{

template<typename T,typename U,typename V>
    class Triple{

    private:
        T m_t;
        U m_u;
        V m_v;

    public:
        Triple(){

        }

        Triple(Triple &&move):m_t(std::move(move.m_t)),m_u(std::move(move.m_u)),
        m_v(std::move(move.m_v))
        {

        }

        Triple(T t, U u, V v):m_t(t),m_u(u),m_v(v){

        }

        inline void setT(T t){
            this->m_t = t;
        }
        inline void setU(U u){
            this->m_u = u;
        }
        inline void setV(V v){
            this->m_v = v;
        }

        inline T getT(){
            return this->m_t;
        }
        inline T cT()const{
            return m_t;
        }
        inline U getU(){
            return this->m_u;
        }
        inline U cU()const{
            return m_u;
        }
        inline V getV(){
            return this->m_v;
        }
        inline V cV(){
            return m_v;
        }
    };

}

#endif // CTRIPLE_H
