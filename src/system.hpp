// ---------------------------------------------------------------------
// system.hpp
// lime
//
// Copyright © 2025 elmerucr. All rights reserved.
// ---------------------------------------------------------------------

#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include <chrono>
#include <thread>

enum mode {
	DEBUG_MODE = 0,
	RUN_MODE = 1
};

class host_t;
class core_t;
class debugger_t;
class vdc_t;

class system_t {
private:
	std::chrono::time_point<std::chrono::steady_clock> system_start_time;
	std::chrono::time_point<std::chrono::steady_clock> end_of_frame_time;
public:
    system_t();
    ~system_t();

    host_t *host;
	core_t *core;
	debugger_t *debugger;

	enum mode current_mode;
	void switch_mode();
	void switch_to_run_mode();
	void switch_to_debug_mode();

    void run();

    bool running;
};

#endif
