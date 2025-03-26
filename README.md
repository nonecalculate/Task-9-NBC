![image](https://github.com/user-attachments/assets/3118a7e8-aac7-48e1-9ea4-16c23124f806)# Task-9-NBC
내일배움 캠프 9번째 과제 저장용입니다.

전체적인 구성은 블루프린트를 이용해 제작하였습니다. 추후 C++ 을 이용해 재구성할 예정입니다.

전체적인 흐름은 다음과 같습니다.

게임모드 
-> OnLogin 으로 플레이어의 입장 감지. New Player 에서 플레이어 컨트롤러로 캐스팅 후 플레이어 스테이트 캐스팅. 플레이어 이름을 입장 순서에 따라 1, 2 로 나눔.
![image](https://github.com/user-attachments/assets/bdcb1bbc-32a2-416c-8ba8-037456221206)

Begin Play 에서 GenerateRandom Number 라는 블루프린트 클래스를 이용해 같은 수가 없는 세자리 숫자를 생성 후 GoalScore 라는 String 변수에 저장.
![image](https://github.com/user-attachments/assets/ada122b0-e133-45ce-86f7-bdbc1580d3da)

GetMessage (Custom Event) 를 통하여 Controller 에서 메세지, 플레이어 이름, 플레이어 스테이트를 받아옴. (RPC) 받아온 정보를 통해 이 메세지가 답에 도전하는지 확인하는 로직인 Check String 이라는 블루프린트 클래스로 메세지 입력. Branch 로 True 가 나오면 도전 횟수를 올린 뒤 검사.
![image](https://github.com/user-attachments/assets/98b5a7c3-f5e2-48d3-b9b6-33c75ef9967d)

(Print String 은 답 디버깅 용입니다. 간단하게 하면 세번안에는 하기 너무 힘들어서..)

Check Score 블루프린트 클래스에서 받은 String 을 통해 Strike, Ball, Out 의 갯수를 확인.
![image](https://github.com/user-attachments/assets/8f00016b-2a1b-4cd0-aa3a-7470def9b068)

For Each Roop 를 통해 Strike, Ball, Out 의 갯수를 확인한 뒤 이를 Print String 으로 보여줌. 만약 Strike 가 3 개라면 답을 입력한 플레이어가 Winner 가 되고 게임을 재시작함.
![image](https://github.com/user-attachments/assets/561b3e47-5e53-4e15-9fb6-b1f7b8209072)

게임 재시작은 Custom Event 로 만들어 주었음. Begin Play 의 로직과 유사하나 모든 플레이어 스테이트를 가져와 도전 횟수를 0 으로 초기화해줌. Goal Score string 또한 초기화.
![image](https://github.com/user-attachments/assets/3590cc7a-d61c-4033-bec0-cd7352197cb1)

두 Custom Event 모두 Reliable 체크 에 리플리케이트는 서버에서 실행.

위젯
-> ChatPanel 과 ChatMessage 라는 두개의 위젯 블루프린트 생성. ChatPanel 은 플레이어가 입력하기 위한 대화창 및 대화 저장공간이고 ChatMessage 는 저장될 채팅 메시지의 폰트, 크기를 담당.
![image](https://github.com/user-attachments/assets/0e7bc12b-1498-4b56-be2d-2652a46296ab)
