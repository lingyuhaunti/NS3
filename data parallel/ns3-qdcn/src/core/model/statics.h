#pragma once
#include <iostream>
#include <fstream>

class statics {
public:
	uint64_t GetflowId() {
		return flow_id;
	}
	uint64_t GetflowSsize() {
		return flow_ssize;
	}
	double GetflowStart() {
		return flow_start;
	}
	double GetflowEnd() {
		return flow_end;
	}
	uint64_t GetflowRsize() {
		return flow_rsize;
	}
	uint64_t GetSendNode(){
		return send_node;
	}
	uint64_t GetRecNode(){
		return rec_node;
	}

	void SetflowId(uint64_t id) {
		flow_id = id;
	}
	void SetflowSsize(uint64_t size) {
		flow_ssize = size;
	}
	void SetflowRsize(uint64_t size) {
		flow_rsize = size;
	}
	void SetflowStart(double time) {
		flow_start = time;
	}
	void SetflowEnd(double time) {
		flow_end = time;
	}
	void SetSendNode(uint64_t node){
		send_node = node;
	}
	void SetRecNode(uint64_t node){
		rec_node = node;
	}


	statics() {
		flow_id = 0;
		flow_start = 0;
		flow_end = 0;
		flow_rsize = 0;
		flow_ssize = 0;
		send_node = 0;
		rec_node = 0;
	}

protected:
	uint64_t flow_id;
	double flow_start;
	double flow_end;
	uint64_t flow_ssize;
	uint64_t flow_rsize;
	uint64_t send_node;
	uint64_t rec_node;
};
extern std::ofstream output_file;
extern statics m_static[];
extern bool Array_P2W[];
extern bool Array_W2P[];
extern bool Array_PSend[];
extern bool Array_WSend[];
extern uint16_t flowc_count;