Inicialmente, é declarada a função f, onde esta irá receber uma matriz 3x3 como parâmetro e irá retornar o valor da seguinte equação:

 ``( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0])``

Após isso, é declarada a função main, onde, nesta, é definida uma matriz inteira m 3x3 com os valores:

| 0 | 1 | 0 |
|---|---|---|   
| 3 | 1 | -1|
| 4 | 0 | 1 |

Depois, é declarada uma váriavel inteira DE que receberá o valor da equação com os valores de m da função f. Dessa forma, ao ser inserida como parâmetro na função f, será retornado o resultado da seguinte equação para a váriavel DE:

(0 * 1 * 1) + (1 * (-1) * 4) + (0 * 3 * 0) - (1 * 1 * 1) - (0 * (-1 ) * 0) - (0 * 1 * 4) =

0 - 4 + 0 - 1 - 0 - 0 = -5

E, por fim, será imprimido o valor de DE que é igual a -5 e será retornado o valor de 0, saindo, assim, da função main.