#include <QObject>

class gpio : public QObject
{
    Q_OBJECT
public:
    gpio();
    static void Initialize();
    static void destroy();
    static void ISR();
    static bool isHIGH();
    static bool isLOW();
    void emit_RisingSignal();
    void emit_FallingSignal();
    	void inserted();
	void removed();

private:
    gpio* instancePtr;
    static const int POWER=21;
    static const int BUTTON=8;

signals:
    void RisingEdge(void);
    void FallingEdge(void);

};