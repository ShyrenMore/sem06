## Questions on Cloud computing

### What is Cloud Computing?

- Cloud computing is the on-demand delivery of IT resources over the Internet with pay-as-you-go pricing. Instead of buying, owning, and maintaining physical data centers and servers, you can access technology services, such as computing power, storage, and databases, on an as-needed basis from a cloud provider like Amazon Web Services (AWS).
- Organizations of every type, size, and industry are using the cloud for a wide variety of use cases, such as data backup, disaster recovery, email, virtual desktops, software development and testing, big data analytics, and customer-facing web applications. For example, healthcare companies are using the cloud to develop more personalized treatments for patients. Financial services companies are using the cloud to power real-time fraud detection and prevention. And video game makers are using the cloud to deliver online games to millions of players around the world.

### Features/characteristics of cloud computing 

1) Agility
The cloud gives you easy access to a broad range of technologies so that you can innovate faster and build nearly anything that you can imagine. You can quickly spin up resources as you need them–from infrastructure services, such as compute, storage, and databases, to Internet of Things, machine learning, data lakes and analytics, and much more. <br> You can deploy technology services in a matter of minutes, and get from idea to implementation several orders of magnitude faster than before. This gives you the freedom to experiment, test new ideas to differentiate customer experiences, and transform your business.

2) Elasticity
With cloud computing, you don’t have to over-provision resources up front to handle peak levels of business activity in the future. Instead, you provision the amount of resources that you actually need. You can scale these resources up or down to instantly grow and shrink capacity as your business needs change.

3) Cost savings
The cloud allows you to trade fixed expenses (such as data centers and physical servers) for variable expenses, and only pay for IT as you consume it. Plus, the variable expenses are much lower than what you would pay to do it yourself because of the economies of scale. 

4) Deploy globally in minutes
With the cloud, you can expand to new geographic regions and deploy globally in minutes. For example, AWS has infrastructure all over the world, so you can deploy your application in multiple physical locations with just a few clicks. Putting applications in closer proximity to end users reduces latency and improves their experience.

### NIST cloud computing model

National Institute of Standards and Technology(NIST) states that Cloud computing is a model for enabling ubiquitous, convenient, on-demand network access to a shared pool of configurable computing resources that can be rapidly provisioned and released with minimal management effort or service provider interactive.

### Essential Cloud Computing Characteristics:

**On-demand self-service:** consumers can unilaterally provision computing capabilities as needed automatically without requiring human interaction with each service provider.
**Broad network access:** capabilities are available over the network and accessed through standard mechanism that promote use by heterogeneous thin or thick client platforms.
**Resources pooling:** The provider’s computing resources are pooled to serve multiple consumers using a multi-tenant model, with different physical and virtual resources dynamically assigned and reassigned according to consumer demand
**Rapid elasticity:** capabilities can be elastically provisioned and released to scale rapidly outward and inward commensurate with demand.
**Measured service:** cloud systems automatically control and optimize resource use by leveraging a metering capability at some level of abstraction appropriate to the type of service.

#### Service Models

**Software as a Service (Saas):** SaaS provides you with a complete product that is run and managed by the service provider. In most cases, people referring to SaaS are referring to end-user applications (such as web-based email). With a SaaS offering, you don’t have to think about how the service is maintained or how the underlying infrastructure is managed. You only need to think about how you will use that particular software. 

**Platform as a Service (PaaS):** PaaS removes the need for you to manage underlying infrastructure (usually hardware and operating systems), and allows you to focus on the deployment and management of your applications. This helps you be more efficient as you don’t need to worry about resource procurement, capacity planning, software maintenance, patching, or any of the other undifferentiated heavy lifting involved in running your application. 

**Infrastructure as a Service (IaaS):** IaaS contains the basic building blocks for cloud IT. It typically provides access to networking features, computers (virtual or on dedicated hardware), and data storage space. IaaS gives you the highest level of flexibility and management control over your IT resources. It is most similar to the existing IT resources with which many IT departments and developers are familiar.

### Cloud computing architechture

The cloud architecture is divided into 2 parts i.e.

- Frontend :
Frontend of the cloud architecture refers to the client side of cloud computing system. Means it contains all the user interfaces and applications which are used by the client to access the cloud computing services/resources. For example use of a web browser to access the cloud plat form.
Client Infrastructure – Client Infrastructure refers to the frontend components. It contains the applications and user interfaces which are required to access the cloud platform.

- Backend : 
Backend refers to the cloud itself which is used by the service provider. It contains the resources as well as manages the resources and provides security mechanisms. Along with this it includes huge storage, virtual applications, virtual machines, traffic control mechanisms, deployment models etc.

- Layers present in backend : <br>
**Application** –
Application in backend refers to a software or platform to which client accesses. Means it provides the service in backend as per the client requirement.<br>
**Service** –
Service in backend refers to the major three types of cloud based services like SaaS, PaaS and IaaS. Also manages which type of service the user accesses.<br>
**Cloud Runtime** –
Runtime cloud in backend refers to provide of execution and runtime platform/environment to the virtual machine.<br>
**Storage** –
Storage in backend refers to provide flexible and scalable storage service and management of stored data.<br>
**Infrastructure** –
Cloud Infrastructure in backend refers to hardware and software components of cloud like it includes servers, storage, network devices, virtualization software etc.<br>
**Management** –
Management in backend refers to management of backend components like application, service, runtime cloud, storage, infrastructure, and other security mechanisms etc.<br>
**Security** –
Security in backend refers to implementation of different security mechanisms in the backend for secure cloud resources, systems, files, and infrastructure to end-users.<br>
**Internet** –
Internet connection acts as the medium or a bridge between frontend and backend and establishes the interaction and communication between frontend and backend.<br>

### Limitations of Cloud: 

**Cloud downtime**
- The cloud, like any other IT set-up, can experience technical problems such as reboots, network outages and downtime. These events can incapacitate business operations and processes, and can be damaging to business.
- You should plan for cloud downtime and business continuity. Try to minimise the impact and the number of outages and ensure the maximum level of service availability for your customers and staff. 

**Limited control**
- The cloud service provider owns, manages and monitors the cloud infrastructure. You, as the customer, will have minimal control over it. You will be able to manage the applications, data and services operated on the cloud, but you won't normally have access to key administrative tasks, such as updating and managing firmware or accessing server shell.
- In order to mitigate risks, it may help to carry out a risk assessment before you hand over any control to a service provider. Once you have a clear idea of the risks, you will be able to weigh them against the advantages of cloud computing.

**Cost unpredictability** due to fluctutating demands

## Questions on virtualisation

### What is virtualisation?

- Virtualization is the "creation of a virtual (rather than actual) version of something, such as a server, a desktop, a storage device, an operating system or network resources".
- In other words, Virtualization is a technique, which allows to share a single physical instance of a resource or an application among multiple customers and organizations. It does by assigning a logical name to a physical storage and providing a pointer to that physical resource when demanded.
- Creation of a virtual machine over existing operating system and hardware is known as Hardware Virtualization. A Virtual machine provides an environment that is logically separated from the underlying hardware.
- The machine on which the virtual machine is going to created is known as Host Machine and that virtual machine is referred as a Guest Machine

### Benefits of virtualisation

**Reduced expenses** 
- Computing power comes at a price. If the only way to get more resources is to purchase new hardware, that price becomes hefty. With virtualization tactics, you can take a hard look at your existing infrastructure and identify wasted or idle computing resources.
- Too often, organizations deploy servers to run applications that consume only a fraction of their available resources. Such servers never make use of their full potential. To make matters worse, when their applications are not running, these servers sit entirely idle.
- In a virtualized environment, you can assign each VM precisely the amount of computing power it needs to do its job. The remaining resources are then available for other VMs and their applications.
- Virtualization costs are almost always lower than the cost of purchasing and maintaining additional hardware.

**Resiliency**
- A virtualized server environment is not bound to hardware like a traditional environment. You can easily back up, copy, and clone VMs to different physical hardware.
- Waiting for new hardware to be ready for deployment can take days, weeks, or even months. Meanwhile, you can deploy a VM backup in a matter of minutes. When Murphy’s Law finally catches up with you, you will be thankful you can rapidly deploy your VM on a different machine, in a different location, with minimal hassle.

**High availability**
Since you can clone a VM almost effortlessly, you can easily set up redundant virtualized environments with exceptionally high availability. By automatically monitoring VM status and rapidly switching to backup VMs in an outage, virtualization provides an extremely reliable system with no single point of failure in hardware or software.

**Increased efficiency**
Virtual environments are much easier to maintain than physical environments. Rather than managing numerous physical servers requiring individual attention, virtualization enables you to configure, monitor, and update all your VMs from a single machine. This saves time deploying updates, implementing security patches, and installing new software.

**Environmentally friendly**
In the long run, virtualization is an eco-friendly approach to IT. Reducing hardware requirements also reduces power consumption, ultimately minimizing our carbon footprint.

### What is hypervisor

- A Cloud Hypervisor is software that enables the sharing of cloud provider’s physical compute and memory resources across multiple virtual machines (VMs). 
- Cloud Hypervisors abstract the underlying servers from ‘Guest’ VMs and OSs. OS calls for server resources (CPU, memory, disk, print, etc) are intercepted by the Cloud Hypervisor which allocates resources and prevents conflicts. As a rule, guest VMs and OSs run in a less-privileged mode than the hypervisor so they cannot impact the operation of the hypervisor or other guest VMs
- There are two major classifications of Hypervisor: Bare metal or native (Type 1) and Hosted (Type 2). Type 1 Hypervisors run directly on host machine hardware with no OS beneath. These hypervisors communicate directly with the host machine resources. VMware ESXi and Microsoft Hyper-V are Type 1.
- Type 2 Hypervisors usually run above the host machine OS and rely on the host OS for access to machine resources. They are easier to se up and manage since the OS is already in place, and thus Type 2 hypervisors are often used for home use and for testing VM functionality. VMware Player and VMware Workstation are Type 2 hypervisors.
- KVM (Kernel-based Virtual Machine) is a popular hybrid hypervisor with some Type 1 and Type 2 characteristics. This open-source hypervisor it built into Linux and lets Linux act as a Type 1 hypervisor and an OS at the same time.
- Because bare-metal hypervisors are isolated from the attack-prone operating system, they are extremely secure. In addition, they generally perform better and more efficiently than hosted hypervisors. For these reasons, most enterprise companies choose bare-metal hypervisors for data center computing needs.

### Benefits to using a hypervisor

**Time to Use**: Cloud Hypervisors enable VMs to be instantly spun up or down, as opposed to days or weeks required to deploy a bare metal server. This enables projects to be created and have teams working the same day. Once a project is complete, VMs can be terminated to save organizations from paying for unnecessary infrastructure.

**Utilization**: Cloud Hypervisors enable several VMs to run on a single physical server and for all the VMs to share its resources. This improves the server utilization and saves on power, cooling, and real estate that is no longer needed for each individual VM.

**Flexibility**: Most Cloud Hypervisors are Type 1 (Bare-metal) enabling guest VMs and OSs to execute on a broad variety of hardware, since the hypervisor abstracts the VMs from the underlying machine’s drivers and devices.

**Portability**: Since Cloud Hypervisors enable portability of workloads between VMs or between a VM and an organization’s on-premises hardware. Applications that are seeing spikes in demand can simply access additional machines to scale as needed.

**Reliability**: Hardware failures can be remediated by moving VMs to other machines, either at the cloud provider or in a private cloud or on-premises hardware. Once the failure is repaired workloads can fail back to ensure availability of application resources on the VM.

## Questions on Containerisation

### What is Containerisation?

- Containerization is OS-based virtualization which creates multiple virtual units in the userspace, known as Containers. Containers share the same host kernel but are isolated from each other through private namespaces and resource control mechanisms at the OS level. 
- Container-based Virtualization provides a different level of abstraction in terms of virtualization and isolation when compared with hypervisors. Hypervisors use a lot of hardware which results in overhead in terms of virtualizing hardware and virtual device drivers. 
- A full operating-system (e.g -Linux, Windows) run on top of this virtualized hardware in each virtual machine instance. But in contrast, containers implement isolation of processes at the operating system level, thus avoiding such overhead. These containers run on top of the same shared operating system kernel of the underlying host machine and one or more processes can be run within each container. 
- In containers you don’t have to pre-allocate any RAM, it is allocated dynamically during the creation of containers while in VM’s you need to first pre-allocate the memory and then create the virtual machine. Containerization has better resource utilization compared to VMs and a short boot-up process. It is the next evolution in virtualization. 
- Containers are able to run virtually anywhere, greatly easy development and deployment: on Linux, Windows, and Mac operating systems; on virtual machines or bare metal, on a developer’s machine or in data centers on-premises; and of course, in the public cloud. 
- Containers virtualize CPU, memory, storage, and network resources at the OS-level, providing developers with a sandboxed view of the OS logically isolated from other applications. Docker is the most popular open-source container format available and is supported on Google Cloud Platform and by Google Kubernetes Engine.


**Read about Docker, its architechture, commands and benefits from [here](https://www.geeksforgeeks.org/containerization-using-docker/)**

### What is container orchestration, explain it's need?

- Container orchestration is the automation of much of the operational effort required to run containerized workloads and services. This includes a wide range of things software teams need to manage a container’s lifecycle, including provisioning, deployment, scaling (up and down), networking, load balancing and more.

*Need*
- a containerized application might translate into operating hundreds or thousands of containers, especially when building and operating any large-scale system.
- This can introduce significant complexity if managed manually. Container orchestration is what makes that operational complexity manageable for development and operations—or DevOps—because it provides a declarative way of automating much of the work. 
- This makes it a good fit for DevOps teams and culture, which typically strive to operate with much greater speed and agility than traditional software teams.

**Read about Kubernetes, features of K8S, Architechture from [here](https://www.geeksforgeeks.org/introduction-to-kubernetes-k8s/)**

## Questions on Identity Access Management

- What are IAM components: Users, Groups, Roles, Policies
- Difference between Root and IAM user: Root user are your credentials through which you have signed up providing your card and billing details, IAM user accounts are user accounts which you can create for individual services offered by AWS. The main purpose of IAM Users is that they can sign in to the AWS Management Console and can make requests to the AWS services.
- Types of policies: Inline and custom

## General knowledge 

- EC2 (Elastic Cloud Compute) is an example of IaaS
- Elastic beanstalk is an example of PaaS
- Any software like Dropbox, word, etc is an example of SaaS
- S3 (Simple Storage Service) is an example of Storage as a Service
- RDS (Relational Database Service) is an example of Database as a Service
- MFA (Multi-factor auth) is an example of Security as a Service