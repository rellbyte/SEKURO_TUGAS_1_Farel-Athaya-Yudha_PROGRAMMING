from setuptools import setup

package_name = 'my_robot_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='user@email.com',
    description='ROS2 Publisher Subscriber Example',
    license='Apache License 2.0',
    entry_points={
        'console_scripts': [
            'publisher = my_robot_pkg.publisher_node:main',
            'subscriber = my_robot_pkg.subscriber_node:main',
        ],
    },
)
