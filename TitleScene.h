#pragma once
#include <Novice.h>

#include "IScene.h"
#include "StageScene.h" // 次のシーンを参照

class TitleScene : public IScene {
public:
    void Update() override {
        if (Novice::CheckHitKey(DIK_RETURN)) {
            // シーンを「StageScene」に変更
            SceneManager::GetInstance().ChangeScene(new StageScene());
        }
    }

    void Draw() override {
        Novice::ScreenPrintf(100, 100, "Title Screen: Press ENTER to Start");
    }
};
