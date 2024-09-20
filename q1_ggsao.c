#include <stdio.h>

int main(){
    struct driver{
    char name[100];
    int number;
    float racetime;
    } typedef driver;
    
    int N;
    scanf("%d", &N);
    driver run[N];
    for(int i = 0; i<N; i++){
    scanf("%s", run[i].name);
    scanf("%d", &run[i].number);
    scanf("%f", &run[i].racetime);
    }
    for(int i = 0; i<N; i++){
    for(int j = i+1; j<N; j++){
    if(run[i].racetime > run[j].racetime){
    driver teste;
    teste = run[i];
    /*
    run[0] 
	ex: 
    name: 'Gabriel'
    number: 120
    racetime: 145.5
    
    run[1] 2
	ex:
    name: 'Danilo'
    number 140
    racetime: 140.6
    
    teste = run[0]
    run[0] = run[1]
    
    name: 'Gabriel'
    number: 120
    racetime: 145.5 =    
    name: 'Danilo'
    number 140
    racetime: 140.6
    
    run[1] = run[0]
    */
    run[i] = run[j];
    run[j] = teste;
    }
    }
    }
    printf("Vencedor: %s %d\n", run[0].name, run[0].number);
	for (int i = 0; i < N; ++i) {
		printf("%s %d %.2f\n", run[i].name, run[i].number, run[i].racetime);
	}
    return 0;
}	