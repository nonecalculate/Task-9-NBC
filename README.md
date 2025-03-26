# Task-9-NBC
내일배움 캠프 9번째 과제 저장용입니다.

전체적인 구성은 블루프린트를 이용해 제작하였습니다. 추후 C++ 을 이용해 재구성할 예정입니다.

전체적인 흐름은 다음과 같습니다.

게임모드 
-> OnLogin 으로 플레이어의 입장 감지. New Player 에서 플레이어 컨트롤러로 캐스팅 후 플레이어 스테이트 캐스팅. 플레이어 이름을 입장 순서에 따라 1, 2 로 나눔.
![image](https://github.com/user-attachments/assets/bdcb1bbc-32a2-416c-8ba8-037456221206)

Begin Play 에서 GenerateRandom Number 을 이용해 같은 수가 없는 세자리 숫자를 생성 후 GoalScore 라는 String 변수에 저장.
![image](https://github.com/user-attachments/assets/ada122b0-e133-45ce-86f7-bdbc1580d3da)
