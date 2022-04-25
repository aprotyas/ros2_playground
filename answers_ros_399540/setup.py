from setuptools import setup

package_name = 'answers_ros_399540'

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
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'dynamic_minimal = answers_ros_399540.dynamic_minimal:main'
        ],
    },
)
