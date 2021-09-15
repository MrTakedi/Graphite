////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2021-2021 FlibidyDibidy
//
// This file is part of Graphite.
//
// Graphite is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// Graphite is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Graphite; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
////////////////////////////////////////////////////////////////////////////////

#include "rgmui/rgmuimain.h"
#include "carbon/carbon.h"

using namespace carbon;
using namespace rgms;

int main(int argc, char** argv) {
    util::ArgNext(&argc, &argv); // Skip path argument
    int ret = 0;

//    try {
//        rgmui::InitializeDefaultLogger();
//        spdlog::info("program started");
//
//        GraphiteConfig config = GraphiteConfig::Defaults();
//        // TODO load config / window size / ImGui::IniSettings from a file
//
//        rgmui::Window window(1920, 1080, "Graphite");
//        spdlog::info("window created");
//        ImGuiIO& io = ImGui::GetIO();
//        io.IniFilename = NULL; 
//
//        bool wasExited = false;
//        if (!ParseArgumentsToConfig(&argc, &argv, &config)) {
//            spdlog::warn("did not parse command line arguments");
//
//            GraphiteConfigApp cfgApp(&wasExited, &config);
//            rgmui::WindowAppMainLoop(&window, &cfgApp, std::chrono::microseconds(10000));
//        }
//
//        if (!wasExited) {
//            spdlog::info("config completed");
//            spdlog::info("ines path: {}", config.InesPath);
//            spdlog::info("video path: {}", config.VideoPath);
//            spdlog::info("fm2 path: {}", config.FM2Path);
//
//            GraphiteApp app(&config);
//            spdlog::info("main loop initiated");
//            rgmui::WindowAppMainLoop(&window, &app, std::chrono::microseconds(10000));
//        }
//    } catch(const std::exception& e) {
//        rgmui::LogAndDisplayException(e);
//        ret = 1;
//    }
    spdlog::info("program ended");
    return ret;
}

#ifdef _WIN32

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow) {
    rgmui::RedirectIO();
    return main(__argc, __argv);
}
#endif