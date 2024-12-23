#pragma once
#include <Novice.h>

#include "IScene.h"
#include "SceneManager.h"

class ClearScene : public IScene {
public:
    void Update() override {
        if (Novice::CheckHitKey(DIK_ESCAPE)) {
            // 終了処理
            SceneManager::GetInstance().ChangeScene(nullptr);
        }
    }

    void Draw() override {
        Novice::ScreenPrintf(100, 100, "Clear Screen: Press ESC to Exit");
    }
};
