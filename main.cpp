#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int caso, div, den, mod, result, mayor, i, bin, cont, menor, n, mes, dia, columna, fila, k, k2, primo, lado, multiplo=0;
    long long int num, suma, MCM, A, B, numero, factorial=1, u, numInv, aux, res;
    long double pot=1, nume;
    float mod5, area, perimetro, prom;
    char C;

    while (true) {
        cout<<"ingrese el numero del ejercicio a ejecutar: "<<endl; cin>>caso;
        switch (caso) {
            case 1:

                cout<<"Ingrese el numerador y el divisor: "<<endl; cin >> num >> div;
                mod=num%div;
                cout<<"el residuo de la division "<<num<<"/"<<div<<" es: "<<mod<<endl;
            break;

            case 2:
                cout << "ingrese el numero: ";
                cin>>numero;
                mod=numero%2;
                if(mod==0){
                cout << numero<<" es par"<<endl;
                }
                else{
                    cout<<numero<<" es impar"<<endl;
                }
            break;

            case 3:

                cout<<"Ingrese los dos numeros a comparar: "<<endl; cin >> A >> B;
                if(A==B){
                    cout<<"Los numeros ingresados son iguales"<<endl;
                }
                else if(A>B){
                    cout<<"El mayor es " <<A<<endl;
                }
                else{
                    cout<<"El mayor es " <<B<<endl;
                }
            break;

            case 4:
                cout <<"ingrese el numero A y B separados por un espacio"<<endl;
                cin >>A;
                cin >>B;
                if(A>B) cout<<"El menor es:"<<B<< endl;
                else if(B>A) cout<<"El menor es:"<<A<< endl;
                else cout<<"los numeros son iguales"<<endl;
            break;

            case 5:

                cout<<"Ingrese el divisor y denominador respectivamente: "<<endl; cin >> num >> den;
                div=num/den;
                mod5=num % den;
                //cout<<"mod/den = "<<(mod5/den)<<endl;
                if ((mod5/den) >= 0.5){
                    result=div+1;
                }
                else{
                    result=div;
                }
                cout<<num<<"/"<<den<<"="<<result<<endl;
            break;

            case 6:
            cout << "Ingrese el numero A y el B: ";
            cin >> A >> B;
            pot=1;
            u=B;
            if(A==0 && B<=0) cout << "La operacion " << A << '^' << B << " no esta definida." << endl;
            else{
                if(B<0) u=-1*B;
                for(;u>0;u--) pot=A*pot;
                if(B<0) pot=1/pot;
                cout << A << '^' << B << '=' << pot << endl;
            }
            break;

            case 7:
                suma=0;
                cout<<"Ingrese un numero: "; cin >> num;
                for(int i=1;i<=num;i++){
                    suma+=i;
                }
                cout<<"La sumatoria desde 0 hasta "<<num<<" es: "<<suma<<endl;
            break;

            case 8:
                cout<< "ingrese el numero entero para calcular su factorial mayores que 0: "<<endl;
                cin>> numero;
                for(num=1;num<=numero;num++){
                 factorial=factorial*num;
                }
                cout<<numero<< "!= "<<factorial<<endl;
            break;

            case 9:
                cout<<"ingrese el radio del circulo: "<<endl; cin>>num;
                area= 3.1416*num*num;
                perimetro=2*3.1416*num;
                cout<<"perimetro: "<<perimetro<<endl<<"area: "<<area<<endl;
            break;

            default:
                cout<<"esa opcion no esta disponible"<<endl;
            break;

            case 10:
                cout<<"ingrese un numero menor de 100 para calcular sus multiplos hasta el 100: "<<endl;
                cin>>numero;
                num=1;
                multiplo=0;
                cout<<"Multiplos de "<<numero<<" menores que 100: "<<endl;
                    while(multiplo<99){

                    multiplo=numero*num;

                    if(multiplo<100)cout<<multiplo<<endl;
                    num++;

                    }

            break;

            case 11:
                cout<<"Ingrese un numero: "<<endl; cin>>num;
                for(int i=0;i<=10;i++){
                    cout<<i<<"x"<<num<<"="<<i*num<<endl;
                }
            break;

            case 12:
                cout<<"ingrese numero mayor que 0 para calcular sus 5 primeras potencias "<<endl;
                cin>>numero;
                num=1;

                for(num=1;num<=5;num++){
                    pot=pot*numero;
                    cout<<numero<<"^"<<num<<"="<<pot<<endl;
                        }
                pot=1;
            break;

            case 13:
                cout<<"ingrese un numero: "<<endl; cin>>num;
                cout<<"los divisores de "<<num<<" son:"<<endl;
                for (int i=1;i<=num;i++){
                    if (num%i==0){
                        cout<<i<<endl;
                    }
                }
            break;

            case 14:
            for(columna=1;columna<=1;columna=columna+1){
                for(fila=1;fila<=50;fila=fila+1){
                    cout<<fila<<"    "<<51-fila<<endl;
                }

            }
            break;

            case 15:
                suma=0;
                do{
                cout<<"ingrese un numero: "<<endl; cin>>num;
                suma+=num;
                }
                while(num!=0);
            cout<<"La suma es: "<<suma<<endl;
            break;

            case 16:
            suma=0;
            num=0;
            prom=0;
            i=1;
            cout<<"ingrese los numeros para calcular su promedio y cero para cerrar: "<<endl;

                while(i==1){
                    cout<<"ingrese un numero: ";
                    cin>>nume;
                        if(nume!=0){
                            suma=suma+nume;
                            num=num+1;
                            prom=suma/num;
                        }
                        else{
                            i=0;
                        }

                }
            cout<<"el promedio es: "<<prom<<endl;
            break;

            case 17:
                mayor=0;
                do{
                cout<<"digite un numero: "<<endl; cin>>num;
                if (num>=mayor){
                    mayor=num;
                }
            }
            while(num!=0);
            cout<<"El numero mayor fue: "<<mayor<<endl;
            break;

            case 18:
                cout<<"ingrese un numero para saber si es cuadrado perfecto"<<endl;
                cin>>numero;
                pot=0;
                for(nume=0;nume<(numero/2)+1;nume=nume+1){
                    pot=nume*nume;
                       if(pot==numero){
                           cout<<numero<<" es cuadrado perfecto"<<endl;
                       break;
                       }
                    }

                if(pot!=numero){
                    cout<<numero<<" NO es cuadrado perfecto"<<endl;
                    }

            break;

            case 19:
                i=2;
                cout<<"ingrese un numero: "<<endl; cin>>num;
                //for(int i=2; i<num; i++){
                while(i<=num/2){

                    if(num%i==0){
                        cout<<num<<" NO es un numero primo"<<endl;
                        break;
                    }
                    i+=1;
                }
                if(num%i!=0){
                    cout<<num<<" es un numero primo"<<endl;
                }
            break;

            case 20:
                num=0;
                aux=0;
                numInv=0;
                cout<<"ingresese el numero para saber si es Palindromo"<<endl;
                cin>>num;
                aux=num;
                while(aux>0){
                    res=aux % 10;
                    aux=aux/10;
                    numInv=numInv*10+res;
                        }

                if(num==numInv){
                    cout<< num<< " es un numero palindromo"<<endl;
                }
                else {
                    cout<<num<<" NO es un numero palindromo"<<endl;
                }

            break;

            case 21:
                cout<<"ingrese una letra"<<endl; cin>>C;
                if (C>64 && C<91){
                    cout<<char(C+32)<<endl;
                }
                else if(C>96 && C<123){
                    cout<<char(C-32)<<endl;
                }
            break;

            case 23:
                cout<<"ingrese un los 2 numeros a evaluar: "<<endl; cin>> A >>B;
                bin=0;
                for(i=1;bin==0;i++){
                    if(i%A==0 && i%B==0){
                        cout<<"El MCM de "<<A<<" y "<<B<<" es "<<i<<endl;
                        bin=1;
                    }
                }
            break;

            case 25:
                cont=1;
                cout<<"Ingrese un nummero: "<<endl;cin>>num;
                div=num;
                while(div>=10){
                    div/=10;
                    cont+=1;
                }
                cout<<num<<" tiene "<< cont<<" digitos"<<endl;

            break;

            case 27:
                cout<<"Digite el primer numero, seguido del operador y posteriormente el segundo numero"<<endl; cin>> A >> C >> B;
                if (C==43){
                    cout<<A<<"+"<<B<<"="<<A+B<<endl;
                }
                else if (C==45){
                    cout<<A<<"-"<<B<<"="<<A-B<<endl;
                }
                else if (C==42){
                    cout<<A<<"x"<<B<<"="<<A*B<<endl;
                }
                else if (C==47){
                    cout<<A<<"/"<<B<<"="<<A/B<<endl;
                }
                else{
                    cout<<"No ingreso un operador valido"<<endl;
                }
            break;

            case 29:
                cout<<"piense en un numero de 0 a 100"<<endl;
                mayor=100;
                menor=0;
                n = rand () % (101);
                do{
                   cout<<n<<" es mayor (>), menor (<) o igual (=) a su numero?"<<endl;cin>>C;
                   if (C == 62){
                       mayor=n;
                   }
                   else if(C == 60){
                       menor=n;
                   }
                   n=(mayor+menor)/2;
                }while(C != 61);
            break;

            //Problemas:

            case 31:
                cout<<"ingrese un caracter: "<<endl;cin>>C;
                if ((C>64 && C<91) || (C>96 && C<123)){
                    if (C==97 || C==101 || C==105 || C==111 || C==117 || C==65 || C==69 || C==73 || C==79 || C==85){
                        cout<<C<<" Es una vocal"<<endl;
                    }
                    else{
                        cout<<C<<" Es una consonante"<<endl;
                    }
                }
                else{
                    cout<<"no es una letra"<<endl;
                }
            break;

            case 33:
                cout<<"Ingrese el mes, seguido de el dia. "<<endl; cin>>mes>>dia;
                if (mes>12){
                    cout<<mes<<" Es un mes invalido"<<endl;
                }
                else{
                    if(mes==2){
                        if(dia<29){
                            cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                        }
                        else if(dia==29){
                            cout<<dia<<"/"<<mes<<" es valida en bisiesto"<<endl;
                        }
                        else{
                            cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
                        }

                    }
                    else if(mes==4 || mes==6 || mes==9 ||mes==11){
                        if (dia<=30){
                            cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                        }
                        else{
                            cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
                        }
                    }
                    else{
                        if (dia<=31){
                            cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                        }
                        else{cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;

                        }
                    }
                }
            break;
            case 35:
                cout<<"Digite un numero entero impar: "<<endl; cin>>n;

                k=1;
                for (fila=0;fila>=0;fila=fila+k){
                    if (fila==n/2){
                        k=-1;
                    }
                    for (columna=0;columna<n;columna++){

                        if(columna>=((n/2)-fila) && columna<(n-((n/2)-fila))){
                            cout<<"*";
                        }
                        else{
                            cout<<" ";
                        }
                    }
                    cout<<endl;
                }
            break;

            case 37:
                cout<<"ingrese un numero: "<<endl;cin>>n;
                k2=0;
                k=1;
                suma=0;

                while(n>k && n>k2){
                    k2+=k;
                    k+=k2;
                    if(k%2 == 0 ){
                        suma+=k;
                    }
                    else if(k2%2 == 0){
                        suma+=k2;
                    }
                }
                if(k2%2==0 && k2>=n){
                    suma-=k2;
                }
                if(k%2==0 && k>=n){
                    suma-=k;
                }
                cout<<"El resultado de la suma es: "<<suma<<endl;
            break;

            case 39:
            k=1;
            suma=0;
                cout<<"ingrese un numero: "<<endl; cin>>n;
                while(n > 10) {
                    mod=n%10;
                    n/=10;

                    if (mod==0){
                        suma+=1;
                    }

                    else{
                        for(int cont=0;cont<mod;cont++){    //Ciclo empleado para elevar un numero a si mismo sin el uso de librerías
                            k*=mod;
                        }
                        suma+=k;
                        k=1;
                    }
                }
                k=1;
                for(int cont=0;cont<n;cont++){              //Ciclo empleado para elevar un numero a si mismo sin el uso de librerías
                    k*=n;
                }
                suma+=k;
                cout<<"El resultado de la suma es: "<<suma<<endl;

            break;

            case 41:
                cout<<"ingrese un numero: "<<endl; cin>>n;
                k=n;
                k2=n-1;
                bin=1;
                MCM=n*k2;
                while(bin==1){
                    for (k=n;k>=1;k--){
                        if(MCM%k!=0){
                            MCM=n*(n+k2);
                            k2++;
                            break;
                        }
                        if(k==1){
                            cout<<"El minimo comun multiplo es: "<<MCM<<endl;
                            bin=0;
                        }
                    }
                }
            break;

            case 43:
                cont=0;
                suma=0;
                cout<<"Digite el numero: "<<endl; cin>>n;
                for(primo=2;primo<=n;primo =primo+1){
                    for(k=1;k<=primo;k++){
                        if(primo%k==0){
                            cont++;
                        }
                    }
                        if(cont<3){
                            suma+=primo;
                            cout<<primo<<endl;
                        }
                        cont=0;

                }
                cout<<"El resultado de la suma es: "<<suma<<endl;
            break;

            case 45:
            cout<<"ingrese un numero impar: "<<endl;cin>>lado;
                for(int fil=0, lado1= lado;fil<lado;fil++){
                    for(int col=0, cont=0; col<lado; col++){
                        if(fil<=col && fil<=lado-col-1){
                            n=lado1*(lado1-1)+1;
                            cout<<n+cont<<'\t';
                            cont++;

                        }
                        else if(fil>=col && fil>=lado-col-1){
                            cout<<"B\t";
                        }
                        else if(fil>col && fil<lado-col-1){
                            cout<<"C\t";
                        }
                        else{
                            cout<<"D\t";
                        }
                    }
                    lado1-=2;
                    cout<<endl<<endl;
                }
            break;
        }
    }
}

