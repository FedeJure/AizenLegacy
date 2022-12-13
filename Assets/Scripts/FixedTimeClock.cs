using UnityEngine;

public class FixedTimeClock
{
    private float lastTime;
    private float timeWindow;

    public FixedTimeClock(float timeInSeconds)
    {
        timeWindow = timeInSeconds;
    }
    

    public bool ReachTime()
    {
        if (lastTime + timeWindow > Time.time) return false;
        lastTime = Time.time;
        return true;
    }
}
