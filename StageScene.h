#pragma once
#include <Novice.h>
#include "ClearScene.h" // 次のシーンを参照
#include "IScene.h"

class StageScene : public IScene {
public:
    void Update() override {
        // ゲームのロジックを記述
        if (Novice::CheckHitKey(DIK_RETURN)) {
            // シーンを「ClearScene」に変更
            SceneManager::GetInstance().ChangeScene(new ClearScene());
        }
    }

    void Draw() override {
		Novice::ScreenPrintf(100, 100, "Stage Screen: Press ENTER to Clear");
    }
};
