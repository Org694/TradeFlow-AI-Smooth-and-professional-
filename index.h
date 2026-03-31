class MostAnsweryAI:
    def __init__(self, user_style):
        self.tone = user_style  # Adapts to your vibe
        self.capabilities = ["Search", "Code", "Analyze", "Create"]

    def process_request(self, prompt):
        # 1. Clean the input
        clean_prompt = prompt.strip().lower()

        # 2. Determine the best tool
        if any(word in clean_prompt for word in ["code", "script", "program"]):
            return self.generate_code(clean_prompt)
        elif "explain" in clean_prompt:
            return self.deep_dive_explanation(clean_prompt)
        else:
            return self.general_assistance(clean_prompt)

    def generate_code(self, task):
        # Logic to provide high-quality, commented code
        return f"### Optimized Solution for: {task}\n```python\n# Code goes here\n```"

    def deep_dive_explanation(self, topic):
        # Logic to provide insights + diagrams
        return f"## Understanding {topic}\n* Point 1\n* Point 2\n"

# Initialize the AI
gemini_style = MostAnsweryAI(user_style="Witty & Helpful")
