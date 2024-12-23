#pragma once
#include <memory>
#include "IScene.h"

class SceneManager {
private:
    IScene* currentScene_;

    // シングルトンのためのコンストラクタ
    SceneManager() : currentScene_(nullptr) {}
public:
    static SceneManager& GetInstance() {
        static SceneManager instance;
        return instance;
    }

    // シーンを変更する
    void ChangeScene(IScene* newScene) {
        if (currentScene_) {
            delete currentScene_;
        }
        currentScene_ = newScene;
    }

    // 更新処理を呼び出す
    void Update() {
        if (currentScene_) {
            currentScene_->Update();
        }
    }

    // 描画処理を呼び出す
    void Draw() {
        if (currentScene_) {
            currentScene_->Draw();
        }
    }
};
