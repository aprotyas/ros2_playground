from setuptools import setup

package_name = 'test_client'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Abrar Rahman Protyasha',
    maintainer_email='aprotyas@u.rochester.edu',
    description='Test Python client for rclpy issue 822',
    license='TODO: License declaration',
    entry_points={
        'console_scripts': [
            'test_client = test_client.test_client:main',
        ],
    },
)
