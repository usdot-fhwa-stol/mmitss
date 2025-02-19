from setuptools import setup,find_packages

setup(name="CarmaKafkaTransceiver",
        version='0.1.0',
        py_modules=["CarmaKafkaTransceiver"],
        description='CarmaKafkaTransceiver tools and classes',
        package_dir={},
        author='Samuel Cornejo',
        author_email='samuelcornejo@arizona.edu',
        packages=find_packages(),  # Automatically discover and include all packages
        install_requires=[
            "confluent-kafka"
        ],
        classifiers=[
            'Development Status :: 3 - Alpha',
            'Intended Audience :: Developers',
            'License :: OSI Approved :: MIT License',
            'Programming Language :: Python :: 3',
            'Programming Language :: Python :: 3.6',
            'Programming Language :: Python :: 3.7',
            'Programming Language :: Python :: 3.8',
        ],
)
