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
                    name = "Half twist"
                }
            },
            {
                "ad,40", new JumpConfig
                {
                    name = "Front"
                }
            },
            {
                "at,40", new JumpConfig
                {
                    name = "Back"
                }
            },
            {
                "ad,41", new JumpConfig
                {
                    name = "Front and twist"
                }
            },
            {
                "at,42", new JumpConfig
                {
                    name = "Back Twist"
                }
            },
            {
                "ad,43", new JumpConfig
                {
                    name = "Rudy"
                }
            },
            {
                "at,44", new JumpConfig
                {
                    name = "Back Double Twist"
                }
            },
            {
                "at,800", new JumpConfig
                {
                    name = "Double Back"
                }
            },
            {
                "ad,801", new JumpConfig
                {
                    name = "Flifis"
                }
            },
            {
                "at,12000", new JumpConfig
                {
                    name = "Triple Back"
                }
            },
            {
                "at,160000", new JumpConfig
                {
                    name = "Quadruple Back"
                }
            },
            {
                "ad,800", new JumpConfig
                {
                    name = "Double Front"
                }
            },
            {
                "ad,12000", new JumpConfig
                {
                    name = "Triple Front"
                }
            },
            {
                "ad,160000", new JumpConfig
                {
                    name = "Quadruple Front"
                }
            },
            {
                "at,822", new JumpConfig
                {
                    name = "Full in full out"
                }
            },
        };
    }
}

public struct JumpConfig
{
    public string name;
}

public struct ProcessedJumpConfig
{
    public string name;
    public float points;
}