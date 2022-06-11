from setuptools import setup

package_name = 'ament_lint_382'

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
    description='Test pkg for ament_lint#382',
    license='TODO',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
