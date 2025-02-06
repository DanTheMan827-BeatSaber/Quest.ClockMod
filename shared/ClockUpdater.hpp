#pragma once
#include "TMPro/TextMeshProUGUI.hpp"  // Text Stuff.
#include "UnityEngine/GameObject.hpp" // For GameObject Stuff
#include "UnityEngine/Gradient.hpp"
#include "UnityEngine/MonoBehaviour.hpp"
#include "UnityEngine/Transform.hpp"  // For Transform stuff
#include "custom-types/shared/macros.hpp"
#include <ctime>
#include <time.h>

using namespace UnityEngine;

DECLARE_CLASS_CODEGEN(ClockMod, ClockUpdater, UnityEngine::MonoBehaviour) {

    DECLARE_INSTANCE_METHOD(void, Start);
    DECLARE_INSTANCE_METHOD(void, Update);

private:
    DECLARE_INSTANCE_FIELD(TMPro::TextMeshProUGUI*, text);
    DECLARE_INSTANCE_FIELD(UnityEngine::Transform*, clockParent);
    DECLARE_INSTANCE_FIELD(UnityEngine::Gradient*, batteryGradient);
    double time_counter = 0;

    clock_t this_time = clock();
    clock_t last_time = this_time;

    time_t rawtime;
    struct tm* timeinfo;

    static ClockUpdater* instance;

    std::string _message;
    int messageShowing = 0;

public:
    const time_t getRawTime() const;
    struct tm* getTimeInfo();
    struct tm* getTimeInfoUTC();
    TMPro::TextMeshProUGUI* getTextMesh();
    void SetColor(UnityEngine::Color color);
    static ClockUpdater* getInstance();
    static std::string getTimeFormat();
    void ShowMessage(std::string message, int duration = 4);

};
