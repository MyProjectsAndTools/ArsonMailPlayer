#pragma once

#include "IMyComponent.h"

namespace Utils
{
    void InitButton(juce::Component* _parent,
                    juce::Button& _button,
                    const juce::String& _text,
                    const std::function<void()>& _callback,
                    juce::Colour _colour,
                    bool _isEnabled);
    void InitButton(juce::Component* _parent,
                    std::vector<juce::Button*>& _buttonsArray,
                    juce::Button& _button,
                    const juce::String& _text,
                    const std::function<void()>& _callback,
                    juce::Colour _colour,
                    bool _isEnabled);

    void SetComponentOwner(IMyComponent* _owned, IMyComponent* _owner);

    juce::Array<juce::File> LoadSongListFromJson();

    inline juce::String GetJsonFilePath()
    {
        return juce::File::getCurrentWorkingDirectory().getFullPathName() +
            R"(\..\..\Source\songs_infos.json)";
    }
}
