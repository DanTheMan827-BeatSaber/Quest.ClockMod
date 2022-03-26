#pragma once
#include "UnityEngine/Vector3.hpp"
#include "UnityEngine/UI/VerticalLayoutGroup.hpp"

// WARNING: Changing values here can give unexpected results and cause crashes
// This containts all the ClockPositions
struct ClockPos_t {
    // Clock InMenu Positions Top                                           X        Y        Z
    UnityEngine::Vector3 MenuPosTop =               UnityEngine::Vector3(0.0f,    -1.7f,    4.0f);
    // Clock InMenu Positions Bottom    // UnityEngine::Vector3(0, Config.ClockY, Config.ClockZ)
    //float MenuXdown = 0;
    //float MenuYdown = 0;
    //float MenuZdown = 0;

    // Clock InNormalSong Positions Top
    UnityEngine::Vector3 NormalSongPosTop =         UnityEngine::Vector3(0.0f,      -2.5f,   7.5f    ); // 0, -2, 8 // 0, -1.7, 5.6
    float NormalSongScaleTop = 1;
    UnityEngine::Vector3 NormalSongRotationTop =    UnityEngine::Vector3(-10.0f,    0.0f,    0.0f    );
    // Clock InNormalSong Positions Bottom
    UnityEngine::Vector3 NormalSongPosDown =        UnityEngine::Vector3(0.0f,      -1.4f,   1.3f    ); // 0, -2.5, 6.65     // 0, -4.45, 2 // 0.0f, -3.5f, 6.65f
    float NormalSongScaleDown = 0.5f;
    UnityEngine::Vector3 NormalSongRotationDown =   UnityEngine::Vector3(32.0f,     0,         0    ); // 45, 0, 0


    // Clock In360/90 Song Positions Top
    UnityEngine::Vector3 RotateSongPosTop =         UnityEngine::Vector3(0,            0.5f,   10    );
    float RotateSongScaleTop = 1;                                        // Scale of the Clock in 360/90 Songs Bottom
    UnityEngine::Vector3 RotateSongRotationTop =    UnityEngine::Vector3(0,            0,      0    );
    //float RotateSongRotationTopX = 20;                                    // Rotation of the Clock in 360/90 Songs Top
    //Clock in360/90 Song Positions/Scale/Rotations Bottom
    UnityEngine::Vector3 RotateSongPosDown =        UnityEngine::Vector3(0,            -2.15f, 3    );    // Position of the Clock in 360/90 Songs Bottom
    float RotateSongScaleDown = 0.6f; // Old Scale 0.8
    UnityEngine::Vector3 RotateSongRotationDown =   UnityEngine::Vector3(35,            0,      0    );    // Rotation of the Clock in 360/90 Songs Bottom
    //float RotateSongRotationDownX = 20;                                    // Rotation of the Clock in 360/90 Songs Bottom

    UnityEngine::Vector3 SongPausePosDown =         UnityEngine::Vector3(0,             -4.45f, 2    );
    // TODO: Implement this maybe
    //// Clock Position for MPLobby
    //float MPLobbyX = 0;
    //float MPLobbyY = 0;
    //float MPLobbyZ = 0;

    //// Clock Position MPSong Top
    //float MPSongXtop = 0;
    //float MPSongYtop = 0;
    //float MPSongZtop = 0;
    //// Clock Position MPSong Bottom
    //float MPSongXdown = 0;
    //float MPSongYdown = 0;
    //float MPSongZdown = 0;
    bool ap1 = false;
};
extern ClockPos_t ClockPos;