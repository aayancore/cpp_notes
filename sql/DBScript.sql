USE [testdb]
GO
/****** Object:  Table [dbo].[courses]    Script Date: 6/30/2025 11:21:48 AM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[courses](
	[cno] [int] IDENTITY(1,1) NOT NULL,
	[cname] [varchar](50) NOT NULL,
	[tno] [int] NOT NULL,
 CONSTRAINT [PK_courses] PRIMARY KEY CLUSTERED 
(
	[cno] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Persons]    Script Date: 6/30/2025 11:21:48 AM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Persons](
	[ID] [int] NOT NULL,
	[Name] [varchar](255) NOT NULL,
	[Age] [int] NULL,
	[City] [varchar](255) NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[student]    Script Date: 6/30/2025 11:21:48 AM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[student](
	[sno] [int] IDENTITY(1,1) NOT NULL,
	[sname] [varchar](50) NOT NULL,
	[age] [int] NULL,
	[dob] [date] NULL,
	[city] [varchar](50) NULL,
	[marks] [int] NULL,
 CONSTRAINT [PK_student] PRIMARY KEY CLUSTERED 
(
	[sno] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[studentcourses]    Script Date: 6/30/2025 11:21:48 AM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[studentcourses](
	[cno] [int] NOT NULL,
	[sno] [int] NOT NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[teacher]    Script Date: 6/30/2025 11:21:48 AM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[teacher](
	[tno] [int] IDENTITY(1,1) NOT NULL,
	[tname] [varchar](50) NOT NULL,
 CONSTRAINT [PK_teacher] PRIMARY KEY CLUSTERED 
(
	[tno] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[courses] ON 
GO
INSERT [dbo].[courses] ([cno], [cname], [tno]) VALUES (1, N'c++', 2)
GO
INSERT [dbo].[courses] ([cno], [cname], [tno]) VALUES (2, N'html', 1)
GO
INSERT [dbo].[courses] ([cno], [cname], [tno]) VALUES (3, N'sql', 3)
GO
SET IDENTITY_INSERT [dbo].[courses] OFF
GO
INSERT [dbo].[Persons] ([ID], [Name], [Age], [City]) VALUES (1, N'fadsl', 19, N'fontana')
GO
SET IDENTITY_INSERT [dbo].[student] ON 
GO
INSERT [dbo].[student] ([sno], [sname], [age], [dob], [city], [marks]) VALUES (1, N'momi', 18, CAST(N'2006-12-11' AS Date), N'fontanaa', 222)
GO
INSERT [dbo].[student] ([sno], [sname], [age], [dob], [city], [marks]) VALUES (2, N'awais', 25, CAST(N'1999-01-29' AS Date), N'virginia', 333)
GO
INSERT [dbo].[student] ([sno], [sname], [age], [dob], [city], [marks]) VALUES (3, N'tayyaba', NULL, NULL, NULL, NULL)
GO
SET IDENTITY_INSERT [dbo].[student] OFF
GO
INSERT [dbo].[studentcourses] ([cno], [sno]) VALUES (2, 1)
GO
INSERT [dbo].[studentcourses] ([cno], [sno]) VALUES (3, 2)
GO
INSERT [dbo].[studentcourses] ([cno], [sno]) VALUES (2, 3)
GO
SET IDENTITY_INSERT [dbo].[teacher] ON 
GO
INSERT [dbo].[teacher] ([tno], [tname]) VALUES (1, N'malik')
GO
INSERT [dbo].[teacher] ([tno], [tname]) VALUES (2, N'abc')
GO
INSERT [dbo].[teacher] ([tno], [tname]) VALUES (3, N'def')
GO
SET IDENTITY_INSERT [dbo].[teacher] OFF
GO
ALTER TABLE [dbo].[courses]  WITH CHECK ADD  CONSTRAINT [FK_courses_teacher] FOREIGN KEY([tno])
REFERENCES [dbo].[teacher] ([tno])
GO
ALTER TABLE [dbo].[courses] CHECK CONSTRAINT [FK_courses_teacher]
GO
ALTER TABLE [dbo].[studentcourses]  WITH CHECK ADD  CONSTRAINT [FK_studentcourses_courses] FOREIGN KEY([cno])
REFERENCES [dbo].[courses] ([cno])
GO
ALTER TABLE [dbo].[studentcourses] CHECK CONSTRAINT [FK_studentcourses_courses]
GO
ALTER TABLE [dbo].[studentcourses]  WITH CHECK ADD  CONSTRAINT [FK_studentcourses_student] FOREIGN KEY([sno])
REFERENCES [dbo].[student] ([sno])
GO
ALTER TABLE [dbo].[studentcourses] CHECK CONSTRAINT [FK_studentcourses_student]
GO
ALTER TABLE [dbo].[Persons]  WITH CHECK ADD  CONSTRAINT [CHK_Person] CHECK  (([Age]>=(18) AND [City]='fontana'))
GO
ALTER TABLE [dbo].[Persons] CHECK CONSTRAINT [CHK_Person]
GO
