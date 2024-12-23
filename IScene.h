#pragma once
class IScene {
public:
    virtual ~IScene() = default;

    // シーンの更新処理
    virtual void Update() = 0;

    // シーンの描画処理
    virtual void Draw() = 0;
};

