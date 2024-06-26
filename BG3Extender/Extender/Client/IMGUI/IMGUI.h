#pragma once

#include <Extender/Client/IMGUI/Backends.h>
#include <imgui.h>

BEGIN_NS(extui)

using HandleType = uint64_t;
static constexpr HandleType InvalidHandle = 0xffffffffffffffffull;

class IMGUIObjectManager;

class IMGUIManager
{
public:
    IMGUIManager();
    ~IMGUIManager();

    void EnableHooks();
    void DisableHooks();

    void InitializeUI();
    void DestroyUI();
    void EnableUI(bool enabled);
    void SetObjects(IMGUIObjectManager* objects);

    void OnRenderBackendInitialized();
    void Update();

    inline std::recursive_mutex& GetGlobalUIMutex()
    {
        return mutex_;
    }

private:
    std::unique_ptr<PlatformBackend> platform_;
    std::unique_ptr<RenderingBackend> renderer_;
    std::recursive_mutex mutex_;

    IMGUIObjectManager* objects_{ nullptr };

    bool initialized_{ false };
    bool enableUI_{ false };
};

END_NS()
