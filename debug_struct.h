struct logged_motor_state {
        int16_t eventnum;
        float phase_sin;
        float phase_cos;
        float id_target;
        float iq_target;
	float m_duty_cycle_set;
        float duty_now;
        float v_bus;
} __attribute__ ((packed));

#define EVENTS_TO_LOG 400

struct motor_log_data {
	char command;
	struct logged_motor_state motor_log[EVENTS_TO_LOG];
} __attribute__ ((packed));

extern struct motor_log_data motor_log_data;
