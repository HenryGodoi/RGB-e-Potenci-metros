Foi me dado um problema para resolver: "Faça um sistema que possua um LED RGB. Para controlar esse LED, foram instalados três potenciômetros , onde cada um será responsável por ajustar a intensidade do LED RGB."
De inicio eu criei 3 variaveis sendo elas: pole_A1, pole_A2 e pole_A3. Cada variavel irá servir para cada um dos potenciômetro mudar a cor do RGB, sendo A1 = Vermelho, A2 = Azul e A3 = Verde no RGB.

Defini cada variavel para o seu respectitivo pino analógico;
Depois defini o pino de cada cor do RGB, pino 11 = Vermelho, pino 10 = Azul e pino 9 = Verde nos pinos digital(PWM~); 
Com o conhecimento de que cada pino tem o seu receptaculo, eu defini cada pino dos leds como mapear pole_A(1, 2 ou 3) para a faixa de 0 a 255,
o motivo disso é por conta do pino digital(PWM~) ser 8 bits e o "analog in" ser 10 bits, preciso fazer essa mapeamento.

<p align="center">
  <img src="Captura de tela 2026-04-07 211951.png" width="60%">
</p>

<p align="center">
  <img src="Captura de tela 2026-04-07 211957.png" width="60%">
</p>
