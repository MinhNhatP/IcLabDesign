----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:26:29 09/05/2023 
-- Design Name: 
-- Module Name:    mux41 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mux41 is
    Port ( control : in  STD_LOGIC_VECTOR (1 downto 0);
           in : in  STD_LOGIC_VECTOR (3 downto 0);
           out : out  STD_LOGIC);
end mux41;

architecture Behavioral of mux41 is

begin


end Behavioral;

