# [002] RGB LED 예제
## RGB LED
<img src="https://t1.daumcdn.net/cfile/tistory/99CA6E3A5C3CE0900C" width="300">

- 가장 긴 핀이 (-) : ground에 연결
- 하나만 있는 핀이 (R) 나머지가 긴 핀에 가까운 순서대로 (G), (B)

## PWM
Pulse Width Modulation은 전원을 제어하는 기술이다. 이를 이용해 LED의 밝기를 조절하고, 다양한 색을 나타낼 수 있다. (RGB값 조절) 아두이노 보드에서 핀번호 앞에 `~`나 `#`이 붙으면 PWM을 사용 가능하다. 
(ex) `~11` 번 핀
```ino
analogWrite(RED_LED, 50);
analogWrite(GREEN_LED, 120);
analogWrite(BLUE_LED, 24);
```
