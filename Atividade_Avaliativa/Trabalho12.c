#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main(){
    int h_inicial, m_inicial,m_tudo_inicial, h_final, m_final, m_tudo_final, duracaom,duracaoh,duracao;
    scanf("%i %i %i %i", &h_inicial, &m_inicial, &h_final, &m_final);

    m_tudo_inicial = (h_inicial * 60) + m_inicial;
    m_tudo_final = (h_final * 60) + m_final;



        if (m_tudo_final > m_tudo_inicial){
            duracao = m_tudo_final - m_tudo_inicial;

        }

        else if(m_tudo_final < m_tudo_inicial){
            duracao = (((h_final + 24) * 60) + m_final) - m_tudo_inicial;
        }

        else{
            duracao = 24*60;
            
        }
        
        duracaoh = duracao/60;
        duracaom = (duracao % 60);

        printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)", duracaoh, duracaom);
}
