using System.Collections.Generic;

namespace Character
{
    public static class JumpsConfig
    {
        public static Dictionary<string, JumpConfig> configs = new Dictionary<string, JumpConfig>
        {
            {
                "g", new JumpConfig
                {
                    name = "Half twist",
                    points = 5
                }
            },
            {
                "ad,m,m", new JumpConfig
                {
                    name = "Front",
                    points = 10
                }
            },
            {
                "at,m,m", new JumpConfig
                {
                    name = "Back",
                    points = 10
                }
            },
            {
                "ad,m,g,m", new JumpConfig
                {
                    name = "Front and twist",
                    points = 20
                }
            },
            {
                "at,m,g,g,m", new JumpConfig
                {
                    name = "Back Twist",
                    points = 25
                }
            },
            {
                "ad,m,g,g,g,m", new JumpConfig
                {
                    name = "Rudy",
                    points = 35
                }
            },
            {
                "at,m,g,g,g,g,m", new JumpConfig
                {
                    name = "Back Double Twist",
                    points = 40
                }
            },
            {
                "at,m,m,m,m", new JumpConfig
                {
                    name = "Double Back",
                    points = 35
                }
            },
            {
                "at,m,m,m,m,m,m", new JumpConfig
                {
                    name = "Triple Back",
                    points = 45
                }
            },
            {
                "at,m,m,m,m,m,m,m,m", new JumpConfig
                {
                    name = "Quadruple Back",
                    points = 55
                }
            },
            {
                "ad,m,m,m,m", new JumpConfig
                {
                    name = "Double Front",
                    points = 35
                }
            },
            {
                "ad,m,m,m,m,m,m", new JumpConfig
                {
                    name = "Triple Front",
                    points = 45
                }
            },
            {
                "ad,m,m,m,m,m,m,m,m", new JumpConfig
                {
                    name = "Quadruple Front",
                    points = 55
                }
            },
            {
                "at,m,g,g,m,m,g,g,m", new JumpConfig
                {
                    name = "Miller",
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