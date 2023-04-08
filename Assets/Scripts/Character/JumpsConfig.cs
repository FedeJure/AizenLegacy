using System.Collections.Generic;

namespace Character
{
    public static class JumpsConfig
    {
        public static Dictionary<string, JumpConfig> configs = new Dictionary<string, JumpConfig>
        {
            {
                "ad,1", new JumpConfig
                {
                    name = "Half twist",
                    points = 5
                }
            },
            {
                "ad,40", new JumpConfig
                {
                    name = "Front",
                    points = 10
                }
            },
            {
                "at,40", new JumpConfig
                {
                    name = "Back",
                    points = 10
                }
            },
            {
                "ad,41", new JumpConfig
                {
                    name = "Front and twist",
                    points = 20
                }
            },
            {
                "at,42", new JumpConfig
                {
                    name = "Back Twist",
                    points = 25
                }
            },
            {
                "ad,43", new JumpConfig
                {
                    name = "Rudy",
                    points = 35
                }
            },
            {
                "at,44", new JumpConfig
                {
                    name = "Back Double Twist",
                    points = 40
                }
            },
            {
                "at,800", new JumpConfig
                {
                    name = "Double Back",
                    points = 35
                }
            },
            {
                "ad,801", new JumpConfig
                {
                    name = "Flifis",
                    points = 35
                }
            },
            {
                "at,12000", new JumpConfig
                {
                    name = "Triple Back",
                    points = 45
                }
            },
            {
                "at,160000", new JumpConfig
                {
                    name = "Quadruple Back",
                    points = 55
                }
            },
            {
                "ad,800", new JumpConfig
                {
                    name = "Double Front",
                    points = 35
                }
            },
            {
                "ad,12000", new JumpConfig
                {
                    name = "Triple Front",
                    points = 45
                }
            },
            {
                "ad,160000", new JumpConfig
                {
                    name = "Quadruple Front",
                    points = 55
                }
            },
            {
                "at,822", new JumpConfig
                {
                    name = "Full in full out",
                    points = 70
                }
            },
        };
    }
}

public struct JumpConfig
{
    public string name;
    public int points;
}