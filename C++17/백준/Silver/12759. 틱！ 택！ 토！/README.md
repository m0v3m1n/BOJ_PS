# [Silver V] 틱! 택! 토! - 12759 

[문제 링크](https://www.acmicpc.net/problem/12759) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 시뮬레이션, 많은 조건 분기

### 제출 일자

2025년 7월 1일 08:50:52

### 문제 설명

<p>틱택토(Tic-Tac-Toe)는 오목과 아주 유사한 형태의 보드게임이다.</p>

<p><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/12759/1.png" style="height:203px; width:204px"></p>

<p>게임 방법은 아래와 같다.</p>

<ol>
	<li>종이 위에 가로줄 2줄 세로줄 2줄을 그린다.</li>
	<li>이렇게 생긴 9칸 위의 빈칸에 플레이어 1은 O, 플레이어 2는 X를 번갈아가며 그린다.</li>
	<li>먼저 O 또는 X를 3개가 직선으로 이어지게 하면 승리하고 게임이 끝난다.</li>
	<li>이어지는 직선이 없고, 더는 그릴 빈칸이 없으면 무승부로 게임이 종료된다.</li>
</ol>

<p>남녀노소 모두 즐길 수 있는 아주 쉬운 게임이지만, 중간에 끝났는지 눈치를 못 채고 계속하는 경우가 있다. 그래서 당신은 제3의 공정하고 자비 없는 냉정한 심판을 두고 싶었다.</p>

<p>각 플레이어가 교대로 O 또는 X를 그린 위치가 입력되면 누가 언제 이기는지를 출력하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 게임을 먼저 시작할 플레이어의 번호가 입력된다. 플레이어의 번호는 1 또는 2이다.</p>

<p>다음 9개의 줄에 게임이 끝날 때까지 번갈아가며 어느 위치에 그렸는지 좌표가 입력된다. 좌표는 가로 행, 세로 열의 순으로 입력된다. 가장 왼쪽 위는 (1, 1), 가장 오른쪽 아래는 (3, 3)이다.</p>

<p>이미 입력된 좌표가 주어지는 경우는 없으며, 항상 게임이 끝나는 입력만 주어진다.</p>

### 출력 

 <p>승자가 결정되는 즉시 이긴 플레이어의 번호를 출력한다. 플레이어의 번호는 1 또는 2이다. 무승부라면 0을 출력한다.</p>

