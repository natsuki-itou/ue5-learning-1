# ue5-learning-1 

## 概要
このプロジェクトは以下の動画  
[Beginners Intro to UE5 - Create a Game in 3 Hours in Unreal Engine 5](https://www.youtube.com/watch?v=KQgOqyYoHAs&t=7162s)  
を参考に実際に手を動かして

- UE5の操作
- UE5におけるC++プログラミング

を学習するものである。  
C++自体の知識も乏しいため、そちらも併せて学習する。

## 学習内容
このプロジェクトで学習した内容のメモ

### UnrealEngine関連
#### C++
- Componentの追加方法
- AActor::OnHit()
- CreateDefaultSubobject()
- UGameplayStatics::GetAllActorsOfClass()
- UStaticMeshComponent::AddForce()
- UStaticMeshComponent::AddImpulse()
- UStaticMeshComponent::OnComponentBeginOverlap()
- UInputComponent
  - Inputと関数の紐づけ方
- UFUNCTION
- UPROPERTY
- UUserWidget
#### BluePrint
-
### その他
- アロー演算子
- ポインタ

## 不明点や調査が必要な点
- デリゲート
- UStaticMeshComponent::AddForceとUCharacterMovementComponent::AddForceの違い
- UPawnMovementComponentについて

## 参考
- Unreal Engine 5から始める C++ & Blueprint  
https://zenn.dev/posita33/books/ue5_starter_cpp_and_bp_001
- UnrealEngine5の教科書 [ゲーム開発入門編,第一巻]  
https://zenn.dev/daichi_gamedev/books/unreal-engine-tutorial
- ChatGPT
