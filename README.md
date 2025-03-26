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

ChatPanel 에서 플레이어가 메시지를 입력하면 Chat Message 에 플레이어 이름과 메시지를 전달해 주는 방향.

![image](https://github.com/user-attachments/assets/cefb70c0-445b-49b2-9891-d2f676e8c675)

다른 플레이어가 보낸 채팅은 컨트롤러를 거쳐 도착함.
![image](https://github.com/user-attachments/assets/87cce0bf-3e00-4423-a208-7428fb6db13a)

ChatMessage 는 아래와 같은 모습
![image](https://github.com/user-attachments/assets/5a50546c-54b4-440f-8845-f99b6b856146)

ChatPanel 과 ChatMessage 의 디자이너
![image](https://github.com/user-attachments/assets/1f98950d-ae31-4fd8-a0dc-45d45ae08828)

![image](https://github.com/user-attachments/assets/cbc435e0-861a-485f-843c-bd41083be640)

플레이어 컨트롤러
-> 로컬 플레이어 컨트롤러인지 검사 후 True 라면 ChatPanel 위젯을 생성 후 Add ViewPort
![image](https://github.com/user-attachments/assets/d09e206e-9b9d-40f6-a9ba-ed43b71a1462)

Enter 로 ChatPanel 에 키보드가 Focus 가능하게 기능
![image](https://github.com/user-attachments/assets/3f159f92-1a67-4809-afb0-905536271ecb)

SR_SubmitChat 이라는 Custom Event 에서는 ChatPanel 에서 받은 메시지와 플레이어 이름을 토대로 모든 컨트롤러의 ChatPanel 에 업데이트 해준다.
![image](https://github.com/user-attachments/assets/0515f145-71a6-49be-a2bf-1669ca78175a)

(이부분이 제일 아쉬운데 서버에서 BroadCast 할 수 있게 만들어야겠습니다.)


다음은 받은 채팅을 업데이트 하기 위한 Custom Event 와 GameMode(서버) 에 보낼 답안 메시지 커스텀 이벤트이다.
![image](https://github.com/user-attachments/assets/808c7dd1-e078-4251-8a65-360198c74c19)


Submit Chat 은 서버에서 실행, Update Chat 과 CheckGoal 은 모두 소유중인 클라이언트에서 실행 이다. (신뢰성은 모두체크되어있음.) 

C++ 로 작성한 것은 블루프린트 클래스 두 개 (CheckScore 과 GenerateRandomNumber) 와 플레이어 스테이트 변수 등 이 있습니다. 자세한 것은 프로젝트 안의 내용을 살펴주세요.

플레이 사진

![image](https://github.com/user-attachments/assets/d9d780d7-fcc7-4e55-babb-837510430a98)




아직 Print String 으로 결과를 보여주기에 이를 수정할 계획이 있습니다. 따로 위젯 블루프린트를 제작해 Server 에서 보내는 메시지를 구성해야 할 것 같습니다.
